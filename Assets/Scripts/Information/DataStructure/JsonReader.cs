using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class JsonReader : MonoBehaviour
{
    public TextAsset TextJson;

    public Building building;

    

    private void Awake()
    {
        building = new Building();
        building = JsonUtility.FromJson<Building>(TextJson.text);
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
