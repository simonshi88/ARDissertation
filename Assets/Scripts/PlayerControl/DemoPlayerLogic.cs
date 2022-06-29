using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;
using UnityEngine.Playables;

public class DemoPlayerLogic : MonoBehaviour
{
    [Range(0.2f,10f)]
    public  float MOVEMENT_SPEED = 5.0f;
    [Range(0.2f, 5f)]
    public  float ROTATION_SPEED = 2.0f;
    float m_horizontalInput;
    float m_verticalInput;
    Vector3 m_verticalMovement;

    CharacterController m_characterController;
    Animator m_animator;

    CinemachineImpulseSource m_cinemachineImpulseSource;

    // Start is called before the first frame update
    void Start()
    {
        m_characterController = GetComponent<CharacterController>();
        m_animator = GetComponent<Animator>();
        m_cinemachineImpulseSource = GetComponent<CinemachineImpulseSource>();



    }

    // Update is called once per frame
    void Update()
    {
        m_horizontalInput = Input.GetAxisRaw("Horizontal");
        m_verticalInput = Input.GetAxisRaw("Vertical");

        m_animator.SetFloat("VerticalInput", m_verticalInput);

        //if (Input.GetButtonDown("Fire1"))
        //    m_cinemachineImpulseSource.GenerateImpulse(1.5f);
    }

    private void FixedUpdate()
    {
        m_verticalMovement = transform.forward * m_verticalInput * MOVEMENT_SPEED * Time.deltaTime;

        m_characterController.Move(m_verticalMovement);

        transform.Rotate(Vector3.up, m_horizontalInput * ROTATION_SPEED);
    }
}
