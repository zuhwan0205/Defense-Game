using DG.Tweening;
using UnityEngine;

public class TileManager : MonoBehaviour
{
    [SerializeField] private Vector3 unitLocalOffset = Vector3.zero;
    [SerializeField] private float moveDuration = 0.2f;

    private Tile draggingTile;

    public void StartDragging(Tile fromTile)
    {
        if (fromTile == null || !fromTile.IsUnitSpawned) return;
        draggingTile = fromTile;
    }

    public void TryDrop(Tile targetTile)
    {
        if (draggingTile == null || targetTile == null) return;
        if (draggingTile == targetTile) return;

        if (!targetTile.IsUnitSpawned)
        {
            Debug.Log("MoveUnit");
            MoveUnit(draggingTile, targetTile);
        }
        else
        {
            Debug.Log("SwapUnits");
            SwapUnits(draggingTile, targetTile);
        }
    }

    public void EndDragging()
    {
        draggingTile = null;
    }

    private void MoveUnit(Tile fromTile, Tile toTile)
    {
        GameObject unit = fromTile.CurrentUnit;
        if (unit == null) return;

        Vector3 targetPos = toTile.transform.position + unitLocalOffset;

        unit.transform.DOMove(targetPos, moveDuration).OnComplete(() =>
        {
            fromTile.ClearUnit();
            toTile.SetUnit(unit);
            unit.transform.localPosition = unitLocalOffset;
        });
    }

    private void SwapUnits(Tile tileA, Tile tileB)
    {
        GameObject unitA = tileA.CurrentUnit;
        GameObject unitB = tileB.CurrentUnit;

        if (unitA == null || unitB == null) return;

        Vector3 targetPosA = tileB.transform.position + unitLocalOffset;
        Vector3 targetPosB = tileA.transform.position + unitLocalOffset;

        Sequence seq = DOTween.Sequence();
        seq.Join(unitA.transform.DOMove(targetPosA, moveDuration));
        seq.Join(unitB.transform.DOMove(targetPosB, moveDuration));

        seq.OnComplete(() =>
        {
            tileA.ClearUnit();
            tileB.ClearUnit();

            tileA.SetUnit(unitB);
            tileB.SetUnit(unitA);

            unitA.transform.localPosition = unitLocalOffset;
            unitB.transform.localPosition = unitLocalOffset;
        });
    }
}
