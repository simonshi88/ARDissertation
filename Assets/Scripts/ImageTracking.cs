using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using TMPro;

public class ImageTracking : MonoBehaviour
{
    [SerializeField] GameObject[] placeablePrefabs;

    Dictionary<string, GameObject> spawnedPrefabs = new Dictionary<string, GameObject>();
    public ARTrackedImageManager trackedImageManager;

    public TextMeshProUGUI text;

    private void Awake()
    {
        trackedImageManager = GetComponent<ARTrackedImageManager>();


        foreach(GameObject prefab in placeablePrefabs)
        {
            GameObject newPrefab = Instantiate(prefab, Vector3.zero, Quaternion.identity);
            newPrefab.name = prefab.name;
            spawnedPrefabs.Add(prefab.name, newPrefab);
        }
    }
    private void OnEnable()
    {
        trackedImageManager.trackedImagesChanged += TrackedImageManager_trackedImagesChanged;
        trackedImageManager.trackedImagesChanged += ShowDebug;
    }

    private void ShowDebug(ARTrackedImagesChangedEventArgs obj)
    {
        text.text = "" + "detected!";
    }

    private void OnDisable()
    {
        trackedImageManager.trackedImagesChanged -= TrackedImageManager_trackedImagesChanged;
        trackedImageManager.trackedImagesChanged -= ShowDebug;
    }

    private void TrackedImageManager_trackedImagesChanged(ARTrackedImagesChangedEventArgs obj)
    {
        foreach (ARTrackedImage item in obj.added)
        {
            UpdateImage(item);
        }

        foreach (ARTrackedImage item in obj.updated)
        {
            UpdateImage(item);
        }
        foreach (ARTrackedImage item in obj.removed)
        {
            spawnedPrefabs[item.name].SetActive(false);
        }
    }

    private void UpdateImage(ARTrackedImage trackedImage)
    {
        string name = trackedImage.referenceImage.name;
        Vector3 position = trackedImage.transform.position;

        GameObject prefab = spawnedPrefabs[name];
        prefab.transform.position = position;
        prefab.SetActive(true);

        foreach (var item in spawnedPrefabs.Values)
        {
            if (item.name != name)
                item.SetActive(false);
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
