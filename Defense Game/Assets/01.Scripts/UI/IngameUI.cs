using UnityEngine;

public class IngameUI : MonoBehaviour
{
    public void OnClickSummon()
    {
        IngameEvent.OnClickSummonButton?.Invoke();
    }
}
