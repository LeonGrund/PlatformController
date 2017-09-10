using UnityEngine;
using System.Collections;

public class toxin : MonoBehaviour {

    public float LiveTime = 5f;
    public float Speed = 1f;

    // Use this for initialization
    void Awake()
    {
        Destroy(transform.gameObject, LiveTime);
    }

    // Update is called once per frame
    void Update()
    {
        transform.Translate(Vector2.left * Time.deltaTime * Speed, Space.World);
    }

  }
