using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEditor;
using UnityEngine;

[CustomEditor(typeof(JsonReader))]
public class JsonWritter : Editor
{
    public override void OnInspectorGUI()
    {

        JsonReader reader = (JsonReader)target;
        if (GUILayout.Button("CreateJsonFile"))
        {
            string json = JsonUtility.ToJson(reader.building, true);
            File.WriteAllText(Application.dataPath + "/Scripts/Information/DataStructure/itemFiles.json", json);
            Debug.Log("Created Files successfully");
        }

        DrawDefaultInspector();
    }


}
