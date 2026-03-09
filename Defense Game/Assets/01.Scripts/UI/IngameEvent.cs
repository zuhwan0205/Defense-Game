using System;
using UnityEngine;

public static class IngameEvent
{
    public static Action OnClickSummonButton;
    public static Action OnClickMergeButton;
    
    public static Action<bool> OnSetMergeBtn_V;             //Visible
    public static Action<bool> OnSetMergeBtn_I;             //Interactable
    public static Action<Vector3> OnSetMergeBtn_P; //Position
}
