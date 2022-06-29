using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using System;

public class BookingObject : MonoBehaviour
{

    public BookingInformation BookingInformation;

    List<BookingInformation> AllRoom_BookingInformation;

    List<BookingInformation> ThisRoom_BookingInformation;

    Dictionary<string, bool> CheckAvaiable;

    public bool Status;

    GameObject DisplayBox;

    public Material[] Materials;

    DateTime Time;
    // Start is called before the first frame update
    void Start()
    {
        ThisRoom_BookingInformation = new List<BookingInformation> ();
        CheckAvaiable = new Dictionary<string, bool> ();
        AllRoom_BookingInformation = InformationManager.Instance.BookingInformation;

        UpdateInformation();

        Time = DateTime.Now;
        

        DisplayBox = this.transform.GetChild(0).gameObject;
    }

    // Update is called once per frame
    void Update()
    {
        Status = IsAvailable(CheckAvaiable, Time);
        ChangeBoxColour(Status);
    }
    void UpdateInformation()
    {
        if(BookingInformation != null)
        {
            foreach (var room in AllRoom_BookingInformation)
            {
                if(room.Title == this.gameObject.name)
                {
                    ThisRoom_BookingInformation.Add(room);
                }
            }

            BuildDictionary();
        }
    }

    void BuildDictionary()
    {
        foreach (var item in ThisRoom_BookingInformation)
        {
            if(item.Status == "Available")
                CheckAvaiable.Add(item.Time + " " + item.Date, true);
            else if(item.Status == "Unavailable")
                CheckAvaiable.Add(item.Time + " " + item.Date, false);
        }
    }

    bool IsAvailable(Dictionary<string, bool> data, DateTime time)
    {
        DateTime JudgeTime = time;

        foreach (var item in data)
        {
            string startTime = item.Key;
            
            DateTime dateTime = Convert.ToDateTime(startTime);           
            DateTime endTime = dateTime.AddMinutes(30);

            if(JudgeTime < endTime  && JudgeTime > dateTime)
                return item.Value;
        }
        return false;
    }

    void ChangeBoxColour(bool status)
    {
        if (status)
            DisplayBox.GetComponent<MeshRenderer>().material = Materials[0];
        else
            DisplayBox.GetComponent<MeshRenderer>().material = Materials[1];
    }

    public void AddOneHour()
    {
        Time = Time.AddMinutes(30);
        Debug.Log(Time.ToString());
    }
    public void ReturnCurrentTime()
    {
        Time = DateTime.Now;

    }
}
