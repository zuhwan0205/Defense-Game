using UnityEngine;
using UnityEngine.UI;

public class LoadingUI : MonoBehaviour
{
    [SerializeField] private Slider slider;

    private void Start()
    {
        BackendSDK.Instance.OnProgressChanged += UpdateBar;
    }

    private void UpdateBar(float value)
    {
        slider.value = value;
    }
}