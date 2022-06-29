using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class Board
{
    public string title;
    public string content;
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