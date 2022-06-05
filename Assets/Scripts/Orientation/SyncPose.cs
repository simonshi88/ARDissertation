using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

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

    public Text log;


    void Awake()
    {
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
        UpdateInfo(item);
        log.text += "imageChanged";
    }

    private void OnTrackedImagesChanged(ARTrackedImagesChangedEventArgs eventArgs)
    {
        foreach (var trackedImage in eventArgs.added)
        {
             UpdateInfo(trackedImage);
        }

        foreach (var trackedImage in eventArgs.updated)
        {
            //if (Vector3.Distance(trackedImage.transform.position, m_ARSessionPosition.transform.position) > 1)
            UpdateInfo(trackedImage);
        }

    }

    private void UpdateInfo(ARTrackedImage trackedImage)
    {

        var pose = trackedImage.transform;
        m_ARAnchor.position = pose.position;
        m_ARAnchor.rotation = pose.rotation;

        var offset_1 = m_PhysicalAnchor.position - m_ARAnchor.position;
        var offset_2 = m_ARAnchor.rotation * m_PhysicalAnchor.rotation;
        SyncOrientation(offset_1, offset_2);
       
    }
    private void UpdateInfo(GameObject cube)
    {
        // Disable the visual plane if it is not being tracked
        if (place)
        {
            var pose = cube.transform;
            m_ARAnchor.position = pose.position;
            m_ARAnchor.rotation = pose.rotation;

            var offset_1 = m_PhysicalAnchor.position - m_ARAnchor.position;
            var offset_2 = m_ARAnchor.rotation * m_PhysicalAnchor.rotation;
            SyncOrientation(offset_1, offset_2);
            place = false;
        }
    }

    private void SyncOrientation(Vector3 offset_1, Quaternion offset_2)
    {
        ARSessionPosition.transform.position += offset_1;
        ARSessionPosition.transform.rotation = offset_2 * ARSessionPosition.transform.rotation;

        //testCube.transform.position += offset_1;
        //testCube.transform.rotation = offset_2 * testCube.transform.rotation;
    }



    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        //UpdateInfo(testCube);
    }
}
