using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class Destination
{
    public GameObject stuff;
    public string title;
    public Board board;
    public bool isGoal;
    public DestinationType type;

    public enum DestinationType
    {
        Default,
        InformationBoard,
        SingleDesk,
        GroupRoom
    }

}


