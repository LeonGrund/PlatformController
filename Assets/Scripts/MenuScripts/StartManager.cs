using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class StartManager : MonoBehaviour {
    
	// Use this for initialization

  
	public void StartGame()
    {
        Application.LoadLevel("Platformer");
    }
    public void CreditGame()
    {

    }
    //instructions
	public void ExitGame()
    {
        Application.Quit();
    }
}
