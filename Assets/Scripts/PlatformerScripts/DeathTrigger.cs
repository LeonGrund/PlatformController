using UnityEngine;
using System.Collections;

public class DeathTrigger : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
    // if object collides with this object
    void OnTriggerEnter2D (Collider2D other)
    {   // if the this collides with is player then to the following
        if (other.gameObject.CompareTag("Player"))
        {
            Rock.rockCount = 0;
            Kryptonite.krypCount = 0;
            PlatformController.score = 0;
            PlatformController.extraJump = 10;
            PlatformController.facingRight = true;
            // reload the scene
            Application.LoadLevel("DeathMenu"); // when dead it loads the DeathMenu
            //Application.LoadLevel("Platformer");
        }
    }
}
