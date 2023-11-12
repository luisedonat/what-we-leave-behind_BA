using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.WSA;

public class NewBehaviourScript : MonoBehaviour
{

    GameObject couch;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        /**
        if (SpatialMappingManager.Instance != null )
        {
            Ray ray = new Ray(Camera.main.transform.position, Camera.main.transform.forward);

            RaycastHit hitInfo;
            if (Physics.Raycast(ray, out hitInfo, 10.0f, LayerMask))
            {
                objectToPlace.transform.position = hitInfo.point + new Vector3(0, objectToPlace.transform.localScale.y / 2, 0);
            }
        }
        **/
        
        
    }
}
