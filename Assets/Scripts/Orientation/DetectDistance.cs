using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class DetectDistance : MonoBehaviour
{
    ARRaycastManager m_RaycastManager;

    static List<ARRaycastHit> s_Hits = new List<ARRaycastHit>();

    Camera m_Camera;
    Vector2 m_Middle;

    [SerializeField]
    static float m_PositionY;

    public Text text;
    public static float PositionY
    {
        get { return m_PositionY; }
        set { m_PositionY = value; }
    }
    private void Awake()
    {
        m_RaycastManager = GetComponent<ARRaycastManager>();

        m_Camera = GetComponentInChildren<Camera>();
        m_Middle = new Vector2(Screen.width / 2, Screen.height / 2);
    }
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if (m_RaycastManager.Raycast(m_Middle, s_Hits, TrackableType.PlaneWithinPolygon))
        {

            Pose hitPose = s_Hits[0].pose;
            m_PositionY =  hitPose.position.y;

            //text.text = "PositionY = " + m_PositionY + "\n";
        }
    }
}
