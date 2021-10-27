using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

[RequireComponent(typeof(ARFace))]
public class AREyeManager : MonoBehaviour
{
    [SerializeField]
    private GameObject leftEyePrefabs;

    [SerializeField]
    private GameObject rightEyePrefabs;

    private ARFace arFace;
    private GameObject leftEye, rightEye;
                                                                                                     

    // Start is called before the first frame update
    void Start()
    {
        arFace = GetComponent<ARFace>();
        ARFaceManager arFaceManager = FindObjectOfType<ARFaceManager>();

        if (arFaceManager != null)
        {
            arFace.updated += ArFace_updated;
        }
    }

    private void ArFace_updated(ARFaceUpdatedEventArgs obj)
    {
        if (arFace.leftEye != null && leftEye == null)
        {
            leftEye = Instantiate(leftEyePrefabs, arFace.leftEye);
            leftEye.name = "LeftEye";
            leftEye.SetActive(false);
        }

        if (arFace.rightEye != null && rightEye == null)
        {
            rightEye = Instantiate(rightEyePrefabs, arFace.rightEye);
            rightEye.name = "RightEye";
            rightEye.SetActive(false);
        }

        if (arFace.trackingState == TrackingState.Tracking && ARSession.state > ARSessionState.Ready)
        {
            if (leftEye != null)
            {
                leftEye.SetActive(true);
            }
            if (rightEye != null)
            {
                rightEye.SetActive(true);
            }
        }
    }

    void onDisable()
    {
        arFace.updated -= ArFace_updated;
        leftEye.SetActive(false);
        rightEye.SetActive(false);
    }
}
