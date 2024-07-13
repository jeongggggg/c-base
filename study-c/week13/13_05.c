#include <stdio.h>

/*
    1) 선택정렬(selection sort)
    - 기준위치의 값(i)과 나머지 배열의 값들을 비교하며 교환
    - 기준위치의 index가 0인 경우
    - 정렬이 되어 있지 않은 n개의 데이터에 대하여 오름차순으로 정렬할 경우

    1. 기준위치 값{i) 제외, 나머지 배열(n-1개)중 가장 작은 값을 찾아 기준위치 값과 비교 후 교환함
    2. 기준위치에 가장 작은 값이 위치하게 됨. 해당 위치의 값 정렬 완료
    3. 기준위치를 증가(i++), 기준위치 값 제외 나머지 배열(n-2)중 가장 작은 값을 찾아 기준위치 값과 비교 후 교환함
    4. 기준위치에 가장 작은 값이 위치하게 됨. 해당 위치의 값 정렬 완료
    5. 기준위치를 계속 증가하여, 나머지 배열의 개수가 1개가 될 때까지 반복함
    6. 정렬완료
*/

// 선택정렬(selection sort) 기본식 : 기준위치의 index가 0인 경우
for(i = 0; i < N-1; i++){ //정렬범위
    
    min = i;

    for(j = i + 1; j < N; j++){
        if(tmp[j] < tmp[min]){
            min = j;
        }
    }

    swap(&tmp[i],&tmp[min])
}


// 기준위치의 index가 0인 경우
void SelectionSort(int a[], int size){
    
    int i,j, t, min;
    int temp;

    printf("\n list :");

    for(t = 0; t<size; t++){
        printf("%d",a[t]);
    }

    printf("\n 실행 \n");

    for(i = 0; i < size - 1; i++){
        min = i;

        for(j = i + 1; j < size; j++){
            if(a[j]<a[min])
            min = j;
        }

        temp = a[i];
        a[i] = a[min];
        a[min] = temp;

        printf("\n step %d :",i + 1);

        for(t = 0; t < size; t++){
            printf("%3d", a[t]);
        }
    }
}
