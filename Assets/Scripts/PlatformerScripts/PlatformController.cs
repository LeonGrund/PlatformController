using UnityEngine;
using System.Collections;

public class PlatformController : MonoBehaviour {

    [HideInInspector] public static bool facingRight = true;
    [HideInInspector] public static bool jump = false;
    [HideInInspector] public bool extJump = false;

    public GameObject SR;
    public GameObject K;
    public GameObject F;

    public float moveForce = 365f;  
    public float maxSpeed = 5f;     // if player goes too fast we force him down to maxSpeed
    public float jumpForce = 1000f;
    public static int extraJump = 10;         // extra jumps
    private bool flag = false;                  // makes sure that you can not jump more than twice in a row
    public Transform groundCheck; // check if player is on the ground
    public static int score = 0;

    public GameObject NoFlip;

    static public bool grounded = false;
    private Animator anim;
    private Rigidbody2D rb2d;

	// Use this for initialization
	void Awake () {
        anim = GetComponent<Animator>();
        rb2d = GetComponent<Rigidbody2D>();

	}
	
	// Update is called once per frame
	void Update () {                                                                                              // we only cast layer on ground layer
        
        grounded = Physics2D.Linecast(transform.position, groundCheck.position, 1 << LayerMask.NameToLayer("Ground"));      // check if he hit anything
        if(Input.GetButtonDown("Jump") && grounded)     // we maling sure we can not double jump in the air
        {
            jump = true;
         
        }
        
        else if(flag && extraJump != 0 && Input.GetButtonDown("Jump"))
        {
            extJump = true;
            extraJump--;
       
        }
    }

    void FixedUpdate()  // physics loop
    {
        float h = Input.GetAxis("Horizontal");  //get our horitzntal axis
        anim.SetFloat("Speed", Mathf.Abs(h));   // set the speed, we have to make sure we dont have negative sped

        if(h*rb2d.velocity.x < maxSpeed) // check if we below our speed limit
        {
            rb2d.AddForce(Vector2.right * h * moveForce); // speeding up in left or right direction
        }

        if(Mathf.Abs (rb2d.velocity.x)> maxSpeed)    // check if we are going to fast
        {
            rb2d.velocity = new Vector2(Mathf.Sign(rb2d.velocity.x) * maxSpeed, rb2d.velocity.y); // figures out if velocity is positive or neg and
                                                                                                  // then figures out what direction we moving to and set the speed to max speed in that direction
        }
        if(h>0 && !facingRight){ Flip(); }  //moving to the right and we re not facing to the right then flip sprite
        else if(h<0 && facingRight){ Flip(); }  // same thing

        if (jump)
        {
            anim.SetTrigger("Jump"); // boost the jump and play the animation - jump state
            rb2d.AddForce(new Vector2(0f,jumpForce)); // 0 on x and jump on y axis
            jump = false;   // can not douple jump
            flag = true;
        }
        
        if (extJump && flag)
        {
            anim.SetTrigger("extraJump"); // boost the jump and play the animation - jump state
            rb2d.AddForce(new Vector2(0f, jumpForce)); // 0 on x and jump on y axis
            extJump = false;
            flag = false;  
        }
    }


    void Flip() // flip our sprite around - if we move right sprite facing right vice versa
    {
        facingRight = !facingRight;
        Vector3 theScale = transform.localScale;
        theScale.x *= -1;    //change the direction of sprite
        var newScale = NoFlip.transform.localScale;
        newScale.x *= -1;
        NoFlip.transform.localScale = newScale;
    

        transform.localScale = theScale;
    }
    // displayed in game
    void OnGUI()
    {
        GUI.Label(new Rect(10, 5, 200, 30), " " + "Kryptonite: " + Kryptonite.krypCount);
        GUI.Label(new Rect(10, 35, 200, 30), " " + "Rock: " + Rock.rockCount);
        GUI.Label(new Rect(10, 65, 200, 30), " " + "Boost: " + extraJump);
        GUI.Label(new Rect(200, 1, 200, 30), " " + "Score: " + score);
    }
}
