using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class ItemData
{

    public string Name;

    public string Title;


    public string Content;


    public InfoType TypeInfo;



    public enum InfoType
    {
        Default,
        Wall,
        Floor,
        Room,
        Desk,
        Chair
    }
}
