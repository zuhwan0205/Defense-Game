using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EmenyControler : MonoBehaviour
{
    private int wayPointCount;      // 이동 경로 개수
    [SerializeField] private Transform[] wayPoints;          // 이동 경로 정보
    private int currentIndex = 0;   // 현재 목표지점 인덱스
    private EmenyMovement  emenyMovement;         // 오브젝트 이동 제어

    public void Setup(Transform[] wayPoints)
    {
        emenyMovement = GetComponent<EmenyMovement>();

        // 적 이동 경로 wayPoint 정보 저장
        wayPointCount = wayPoints.Length;
        this.wayPoints = new Transform[wayPointCount];
        this.wayPoints = wayPoints;

        // 적의 위치를 첫번째 wayPoint 위치로 설정
        transform.position = wayPoints[currentIndex].position;

        StartCoroutine(OnMove());
    }

    /// <summary>
    /// 적 이동/목표지점 설정 코루틴
    /// </summary>
    /// <returns></returns>
    private IEnumerator OnMove()
    {
        NextMoveTo();

        while(true)
        {
            if(Vector3.Distance(transform.position,wayPoints[currentIndex].position)<0.02f * emenyMovement.MoveSpeed)
            {
                NextMoveTo();
            }
            yield return null;
        }
    }

    /// <summary>
    /// 다음 이동 방향 설정
    /// </summary>
    private void NextMoveTo()
    {
        if(currentIndex < wayPointCount - 1)
        {
            transform.position = wayPoints[currentIndex].position;
            Debug.Log(transform.position);
            
            currentIndex++;
            Vector3 direction = (wayPoints[currentIndex].position - transform.position).normalized;
            emenyMovement.MoveTo(direction);
        }
        
        else
        {
            Destroy(gameObject);
        }
    }
}

