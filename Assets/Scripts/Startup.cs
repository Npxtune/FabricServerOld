using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.SceneManagement;

public class Startup : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Debug.ClearDeveloperConsole();
        start:
    Debug.Log("Please select a scene:");
    Debug.Log("1 => Test map");
    Debug.Log("2 => Main map");
    string input = Console.ReadLine();

    if (Int16.Parse(input) == 1 || Int16.Parse(input) == 2)
        {
            Debug.ClearDeveloperConsole();
            SceneManager.LoadScene(Int16.Parse(input));
        }
    else
        {
            Debug.ClearDeveloperConsole();
            Debug.Log("Please select a correct scene!");
            goto start;
        } 
    }
}
