using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class SetNavigation : MonoBehaviour
{
    public Camera TopDownCamera;
    public GameObject NavTargetObject;

    NavMeshPath path;
    LineRenderer line;
    bool lineToggle = false;
    // Start is called before the first frame update
    void Start()
    {
        path = new NavMeshPath();
        line = GetComponent<LineRenderer>();
    }

    // Update is called once per frame
    void Update()
    {
        if ((Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began) || Input.GetKeyDown(KeyCode.T))
        {
            Debug.Log("successed navigation");
            lineToggle = !lineToggle;
        }
        if (lineToggle)
        {
            NavMesh.CalculatePath(transform.position, NavTargetObject.transform.position, NavMesh.AllAreas, path);
            line.positionCount = path.corners.Length;
            line.SetPositions(path.corners);
            line.enabled = true;
        }
    }
}
