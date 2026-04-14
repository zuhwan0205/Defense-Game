using System;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class LoginErrorUI : MonoBehaviour
{
    [SerializeField] private BackendLogin backendLogin;
    [SerializeField] private GameObject panel;
    [SerializeField] private TMP_Text errorText;
    [SerializeField] private Button confirmButton;

    private void OnEnable()
    {
        backendLogin.OnLoginFailed += ShowPanel;
    }

    void OnDisable()
    {
        backendLogin.OnLoginFailed -= ShowPanel;
    }

    private void Start()
    {
        panel.SetActive(false);
        confirmButton.onClick.AddListener(Close);
    }

    public void ShowPanel(string message)
    {
        panel.SetActive(true);
        errorText.text = message;
    }

    public void Close()
    {
        panel.SetActive(false);
    }
}
