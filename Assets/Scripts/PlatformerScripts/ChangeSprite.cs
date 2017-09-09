using UnityEngine;
using System.Collections;

public class ChangeSprite : MonoBehaviour {
    public Sprite groundSprite;
    public Sprite airSprite;
    
    private SpriteRenderer SRenderer;

    public Transform groundCheck; // check if player is on the ground


    // Use this for initialization
    void Start ()
    {
        SRenderer = GetComponent<SpriteRenderer>();
        if( SRenderer.sprite == null)
        {
            SRenderer.sprite = groundSprite;
            
        }
	}
	
	// Update is called once per frame
	void Update ()
    {
        //Debug.log(grounded);
       // System.Console.WriteLine(grounded);
        
        if(Input.GetButtonDown("Jump") && PlatformController.extraJump != 0 )
        {
            SRenderer.sprite = airSprite;
        }
       
       if(PlatformController.grounded)      
       {
            SRenderer.sprite = groundSprite;
        }
	}
}
