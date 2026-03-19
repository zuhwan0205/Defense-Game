using System;
using UnityEngine;

public class UnitSelectionManager : MonoBehaviour
{
    public UnitBase SelectedUnit { get; private set; }

    public event Action<UnitBase> OnUnitSelected;
    public event Action OnUnitDeselected;

    public void SelectUnit(UnitBase unit)
    {
        if (unit == null)
            return;

        SelectedUnit = unit;
        OnUnitSelected?.Invoke(unit);
    }

    public void ClearSelection()
    {
        SelectedUnit = null;
        OnUnitDeselected?.Invoke();
    }
}
