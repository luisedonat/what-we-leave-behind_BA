using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KeyboardScript : MonoBehaviour
{
    public TouchScreenKeyboard keyboard; 

    public void OpenKeyboard()
    {
        keyboard = TouchScreenKeyboard.Open("Enter your comment...", TouchScreenKeyboardType.Default, false, true);
    }

    private void Update()
    {
        if (keyboard != null)
        {
            //keyboardText = keyboard.text;
        }
    }
}
