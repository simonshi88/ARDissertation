using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

[RequireComponent(typeof(ARPlaneManager))]
public class SyncPose : MonoBehaviour
{
    [SerializeField]
    [Tooltip("The camera to set on the world space UI canvas for each instantiated image info.")]
    GameObject m_ARSessionPosition;

    Pose m_PhysicalOrigin;
    Pose m_PhysicalAnchor;
    Pose m_AROrigin;
    Pose m_ARAnchor;

    public GameObject testCube;
    public bool place;
    public GameObject ARSessionPosition
    {
        get { return m_ARSessionPosition; }
        set { m_ARSessionPosition = value; }
    }

    public GameObject PhysicalOrigin;
    public GameObject PhysicalAnchor;

    public ARTrackedImageManager m_TrackedImageManager;

    ARPlaneManager m_PlaneManager;

    public Text log;


    void Awake()
    {
        m_PlaneManager = GetComponent<ARPlaneManager>();
        SetPhysicalOrigin();
        SetPhysicalAnchor();
        SetAROrigin();

    }

    private void SetPhysicalOrigin()
    {
        m_PhysicalOrigin.position = PhysicalOrigin.transform.position;
        m_PhysicalOrigin.rotation = PhysicalOrigin.transform.rotation;
    }

    private void SetPhysicalAnchor()
    {
        m_PhysicalAnchor.position = PhysicalAnchor.transform.position;
        m_PhysicalAnchor.rotation = PhysicalAnchor.transform.rotation;
    }

    private void SetAROrigin()
    {
        m_AROrigin.position = ARSessionPosition.transform.position;
        m_AROrigin.rotation = ARSessionPosition.transform.rotation;
    }

    void OnEnable()
    {
        Orientation.OnImageChangedEvent += OnImageChanged;

    }

    void OnDisable()
    {
        Orientation.OnImageChangedEvent -= OnImageChanged;
    }

    private void OnImageChanged(ARTrackedImage item)
    {
        UpdateInfo();
        log.text += "imageChanged" + item.name;
    }


    public void UpdateInfo()
    {

        m_ARAnchor.position = m_ARSessionPosition.GetComponentInChildren<Camera>().transform.position;

        // Correct the rotation in the z-direction to ensure that the building is erect.
        var z_correct = m_ARSessionPosition.GetComponentInChildren<Camera>().transform.rotation;
        var z_corrected = new Quaternion(z_correct.x, z_correct.y, Quaternion.identity.z, z_correct.w);

        m_ARAnchor.rotation = z_corrected;



        var offset_1 = m_PhysicalAnchor.position - m_ARAnchor.position;
        var offset_2 = m_PhysicalAnchor.rotation * Quaternion.Inverse(m_ARAnchor.rotation);
        SyncOrientation(offset_1, offset_2, m_PhysicalAnchor.position);
        //SyncVectialPosition(DetectDistance.PositionY);

    }
    private void UpdateInfo(GameObject cube)
    {
        // Disable the visual plane if it is not being tracked
        if (place)
        {
            var pose = cube.transform;
            m_ARAnchor.position = pose.position;

            var z_correct = cube.transform.rotation;
            var z_corrected = new Quaternion(z_correct.x, z_correct.y, Quaternion.identity.z, z_correct.w);

            m_ARAnchor.rotation = z_corrected;

            m_ARAnchor.rotation = z_corrected;

            var offset_1 = m_PhysicalAnchor.position - m_ARAnchor.position;
            var offset_2 = m_PhysicalAnchor.rotation * Quaternion.Inverse(m_ARAnchor.rotation);

            SyncOrientation(offset_1, offset_2, m_PhysicalAnchor.position);

            //SyncVectialPosition(DetectDistance.PositionY);
            place = false;
        }
    }

    private void SyncVectialPosition(float distance)
    {
        m_ARSessionPosition.transform.position = new Vector3(m_ARSessionPosition.transform.position.x, 
            m_ARSessionPosition.transform.position.y + distance, m_ARSessionPosition.transform.position.z);
    }

    private void SyncOrientation(Vector3 offset_1, Quaternion offset_2, Vector3 anchor)
    {
        m_ARSessionPosition.transform.position += offset_1 ;
        //m_ARSessionPosition.transform.position += new Vector3(0, m_ARAnchor.position.y, 0);
        m_ARSessionPosition.transform.rotation = offset_2 * m_ARSessionPosition.transform.rotation;
        var vectorBetween = anchor - m_ARSessionPosition.transform.position;
        var newPosition = offset_2 * vectorBetween;
        m_ARSessionPosition.transform.position += vectorBetween - newPosition;

    }



    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        var plane = m_PlaneManager.planePrefab;
        var distance = m_ARSessionPosition.GetComponentInChildren<Camera>().transform.position - plane.transform.position;
        UpdateInfo(testCube);
        log.text = "Position = " + m_ARSessionPosition.GetComponentInChildren<Camera>().transform.position.ToString()
    + "\nRotation = " + m_ARSessionPosition.GetComponentInChildren<Camera>().transform.rotation.ToString() + "\nDistance = " + DetectDistance.PositionY;
    }
}
