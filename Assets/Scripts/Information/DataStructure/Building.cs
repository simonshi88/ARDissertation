using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class Building
{
    public string Title;
    public string Adress;
    public int FloorNumber = 5;
    public Floor BasementOne;
    public Floor Mezzanine;
    public Floor SecondFloor;
    public Floor ThirdFloor;
    public Floor FourthFloor;


}
