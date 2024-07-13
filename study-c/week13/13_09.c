#include <stdio.h>

/*
    3) 삽입정렬(insertion sort)
    - Key값을 알맞은 자리에 삽입하며 정렬
    - Key 값의 인덱스를 1부터 시작
    - 정렬이 되어 있지 않은 n개의 데이터에 대하여 오름차순으로 정렬할 경우

    1. key의 indexrk i인 경우 i-1번째 index부터 비교함
    2. 비교할 index를 하나씩 감소하며 key와 비교
        2-1)key보다 큰 값을 만나면 해당 값의 index를 증가하여 뒤로 밀어버림
        2-2)key보다 작은 값을 만나면 해당 값의 뒤에 key를 삽입
    3. 비교할 index가 0인 경우까지 비교 반복
    4. key의 삽입 완료
    5. key값 설정을 위한 index 증가
    6. key 재설정 후 1~5의 과정 반복(key값 설정을 위한 인덱스가 n-1이 될 때까지)
    7. 더 이상 설정한 key가 없을 경우 정렬 완료
*/

// 삽입정렬(insertion sort) 기본식
for(i = 1; i < N; i++){
    
    key = a[i];
    j = i - 1;

    while((j > 0) && (a[j] > key)){
        a[j+i] = a[j];

        // key보다 큰 경우 비교값이 하나씩 뒤로 밀림
        j = j - 1;
    }

    // key보다 작은 경우 해당 값의 뒤에 key 위치
    a[j+1] = key
}

void insertionSort(int a[], int size){

    int i,j,t,temp;

    printf("\n list :");

    for(t = 0; t < SIZE; t++){
        printf("%d",a[t]);
    }
    printf("\n 실행 결과 \n");

    for(i = 0; i < SIZE; i++){
        temp = a[i];
        j = i-1;

        while((j>=0) && (a[j] > temp)){
            a[j+1] = a[j];
            j = j-1;
        }

        a[j+1] = temp;

        printf("\n %d단계 : ", i);

        for(t=0; t<size; t++){
            printf("%4d", a[t]);
        }
    }
}