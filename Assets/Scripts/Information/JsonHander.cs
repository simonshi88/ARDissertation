using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.IO;

public class JsonHander : MonoBehaviour
{
    GameObject hander;

    public JsonReader reader;

    private void Awake()
    {
        hander = this.gameObject;

    }
    // Start is called before the first frame update
    void Start()
    {
        var destinationData = reader.building.BasementOne.destinations;

        var canvasGroup = hander.transform.GetChild(1).GetChild(0).GetChild(0).GetChild(0);

        for (int i = 0; i < destinationData.Length; i++)
        {
            if (hander.name == destinationData[i].title)
            {
                var boardInformation = destinationData[i].board;
                canvasGroup.GetChild(0).gameObject.GetComponent<Text>().text = boardInformation.title;
                canvasGroup.GetChild(0).gameObject.GetComponent<Text>().text = boardInformation.title;

                canvasGroup.GetChild(1).gameObject.GetComponent<Text>().text = boardInformation.TypeInfo.ToString();
                canvasGroup.GetChild(2).gameObject.GetComponent<Text>().text = boardInformation.content;
            }
        }

        //string json = JsonUtility.ToJson(data_position.ItemData);
        //Debug.Log(json);

        //File.WriteAllText(Application.dataPath + "/itemFiles.json", json);

        //string jsonRead = File.ReadAllText(Application.dataPath + "/itemFiles.json");
        //ItemData itemData = JsonUtility.FromJson<ItemData>(jsonRead);
        //Debug.Log(jsonRead);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
