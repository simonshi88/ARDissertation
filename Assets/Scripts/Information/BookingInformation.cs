using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class BookingInformation
{
    public string Title;
    public string Day;
    public string Time;
    public string Date;
    public string Status;

    public delegate void OnBooking(BookingInformation item);
    public static event OnBooking OnBookingEvent;



    public void ChangeStatus()
    {
        Debug.Log("Current status " + Status);


        OnBookingEvent?.Invoke(this);
    }
}
