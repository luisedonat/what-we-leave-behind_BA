using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundOnTouch : MonoBehaviour
{
    public AudioSource song;
    private bool isPlaying = false;
    
    // Start is called before the first frame update
    void Start()
    {
    
    }

    // Update is called once per frame
    void Update()
    {
        // is there touch detected? 
        if (Input.touchCount > 0)
        {
            // put first touch input into touch variable
            Touch touch = Input.GetTouch(0);

            // has user just touched the object? (= TouchPhase Began)
            if (touch.phase == TouchPhase.Began)
            {
                if (!isPlaying)
                {
                    song.Play();
                    isPlaying = true;
                }
                
                else
                {
                    song.Stop();
                    isPlaying = false; 
                }
            }
        }
    }
}
