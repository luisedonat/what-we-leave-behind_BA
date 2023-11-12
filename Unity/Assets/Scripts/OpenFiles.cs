using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OpenFiles : MonoBehaviour
{
    public GameObject objectToToggle; 

    public void ToggleObject()
    {
        objectToToggle.SetActive(!objectToToggle.activeSelf);
    }
}
