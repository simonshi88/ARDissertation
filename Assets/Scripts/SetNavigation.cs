using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.UI;
using TMPro;
public class SetNavigation : MonoBehaviour
{
    public Camera TopDownCamera;
    public GameObject NavTargetObject;

    NavMeshPath path;
    LineRenderer line;
    bool lineToggle = false;

    [SerializeField] 
    TMP_Dropdown dropdown; // dropdown of destinations
    public Transform currDestination; // current choosen destination
    [SerializeField] 
    Transform[] destinations; // list of destination positions
    [SerializeField] 
    GameObject indicator; // person indicator
    [SerializeField] 
    Text text;  // information text box

    private bool destinationSet; // bool to say if a destination is set

    // Start is called before the first frame update
    void Start()
    {
        path = new NavMeshPath();
        line = GetComponent<LineRenderer>();
        PopulateList();
        destinationSet = false;
    }

    // Update is called once per frame
    void Update()
    {
        //if ((Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began) || Input.GetKeyDown(KeyCode.T))
        //{
        //    Debug.Log("successed navigation");
        //    lineToggle = !lineToggle;
        //}
        //if (lineToggle)
        //{
        //    NavMesh.CalculatePath(transform.position, NavTargetObject.transform.position, NavMesh.AllAreas, path);
        //    line.positionCount = path.corners.Length;
        //    line.SetPositions(path.corners);
        //    line.enabled = true;
        //}

        //if a target is set, calculate and update path
        if (currDestination != null)
        {
            NavMesh.CalculatePath(indicator.transform.position, currDestination.position, NavMesh.AllAreas, path);
            //lost path due to standing above obstacle (drift)
            if (path.corners.Length == 0)
            {
                text.text = "Try moving away for obstacles (optionally recalibrate)";
            }
            else
            {
                text.text = "";
            }
            line.positionCount = path.corners.Length;
            line.SetPositions(path.corners);
            line.enabled = true;

        }
    }


    public void DropdownIndexChanged(int index)
    {
        if (index == 0 && !destinationSet)
        {
            currDestination = null;
            line.positionCount = 0;
        }
        else
        {
            if (destinationSet)
            {
                RemoveArrowAndCollider();
                SetDestination(index);
            }
            else
            {
                dropdown.options.RemoveAt(0);
                dropdown.SetValueWithoutNotify(index - 1);
                SetDestination(index - 1);
            }
            destinationSet = true;
        }
    }

    // fill dropdown
    private void PopulateList()
    {
        List<string> names = new List<string>();
        names.Add("Choose a destination..");
        foreach (Transform dest in destinations)
        {
            names.Add(dest.name);
        }
        dropdown.AddOptions(names);
    }

    //set current destination and create a trigger for showing AR arrows
    public void SetDestination(int index)
    {
        currDestination = destinations[index];
        Debug.Log("Set dest: " + currDestination.name);
        //mSpawner.SetTrigger();

    }


    // remove AR arrow when path is cleared
    private void RemoveArrowAndCollider()
    {
        //Destroy(GameObject.Find("NavTrigger(Clone)"));
        //Destroy(GameObject.Find("Anchor"));
    }

    // clear button listener, delete current destination and repopulate dropdown
    public void Clear()
    {
        currDestination = null;
        line.positionCount = 0;
        destinationSet = false;
        dropdown.ClearOptions();
        PopulateList();
        dropdown.SetValueWithoutNotify(0);
    }
}
