using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.InputSystem;

public class Tile : MonoBehaviour, IDragHandler, IBeginDragHandler, IEndDragHandler
{
    [SerializeField] private TileManager tileManager;
    
    [Header("타일 옵션")]
    [SerializeField] private bool canSpawn = true;   // 소환 가능 여부
    [SerializeField] private bool isBossTile = false;

    public bool CanSpawn => canSpawn;
    public bool IsBossTile => isBossTile;
    
    public bool IsUnitSpawned => CurrentUnit != null;
    public GameObject CurrentUnit { get; private set; }

    public void SetUnit(GameObject unit)
    {
        CurrentUnit = unit;

        if (CurrentUnit != null)
        {
            CurrentUnit.transform.SetParent(transform, false);
            CurrentUnit.transform.localPosition = Vector3.zero;
        }
    }
    
    public void OnDrag(PointerEventData eventData){ }

    public void ClearUnit()
    {
        CurrentUnit = null;
    }

    public void OnBeginDrag(PointerEventData eventData)
    {
        if (!IsUnitSpawned) return;
        tileManager.StartDragging(this);
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        Tile targetTile = GetTilePointer(eventData);

        if (targetTile != null)
            tileManager.TryDrop(targetTile);
        else
            tileManager.EndDragging();
    }

    private Tile GetTilePointer(PointerEventData eventData)
    {
        PointerEventData pointerData = new PointerEventData(EventSystem.current);
        pointerData.position = eventData.position;

        List<RaycastResult> results = new List<RaycastResult>();
        EventSystem.current.RaycastAll(pointerData, results);

        foreach (var result in results)
        {
            Tile tile = result.gameObject.GetComponent<Tile>();
            if (tile != null)
                return tile;
        }

        return null;
    }
}