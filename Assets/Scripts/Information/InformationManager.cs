using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.Linq;
using System;

public class InformationManager : MonoBehaviour
{
    
    static InformationManager m_instance;
    public static InformationManager Instance => m_instance;

    public TextAsset BookingInformation_String;

    public List<BookingInformation> BookingInformation;
    
    public delegate void OnItemAdded(ItemData item);
    public static event OnItemAdded OnItemAddedEvent;

    public FileSystemWatcher watcher;

    public DateTime DateTime;


    private void Awake()
    {
        CreateSingleton();
        AssignBookingInformation();
        watcher = new FileSystemWatcher(@"E:\Documents\unity\AR_dissertation\Assets\Scripts\Information");

        DateTime = DateTime.Now;
    }
    void CreateSingleton()
    {
        if (m_instance == null)
            m_instance = this;
        else
            Destroy(gameObject);
    }

    public void UpdateBookingStatus()
    {

    }

    public void AssignBookingInformation()
    {
        var bookings = JsonHelper.FromJson<BookingInformation>(BookingInformation_String.text);
        BookingInformation = bookings.ToList();
    }

    public List<BookingInformation> SpecificRoom(BookingInformation room)
    {
        List<BookingInformation> bookingInformation = new List<BookingInformation>();

        foreach (var booking in BookingInformation)
        {
            if (booking.Title == room.Title)
            {
                bookingInformation.Add(booking);
            }
        }
        return bookingInformation;

    }

    private void OnEnable()
    {
        watcher.Filter = "*.json";
        watcher.NotifyFilter = NotifyFilters.Attributes
                                 | NotifyFilters.CreationTime
                                 | NotifyFilters.DirectoryName
                                 | NotifyFilters.FileName
                                 | NotifyFilters.LastAccess
                                 | NotifyFilters.LastWrite
                                 | NotifyFilters.Security
                                 | NotifyFilters.Size;
        watcher.IncludeSubdirectories = true;
        watcher.EnableRaisingEvents = true;
        watcher.Changed += OnChanged;
    }

    private void OnDisable()
    {
        watcher.Changed -= OnChanged;
    }
    // Start is called before the first frame update
    void Start()
    {

    }

    private void OnChanged(object sender, FileSystemEventArgs e)
    {
        if (e.ChangeType != WatcherChangeTypes.Changed)
        {
            return;
        }
        Debug.Log($"Changed: {e.FullPath}");
        AssignBookingInformation();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
