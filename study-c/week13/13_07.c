#include <stdio.h>

/*
    2) 버블정렬(bubble sort)
    - 기준값{i)과 나머지 배열의 값들을 비교하며 교환
    - 정렬이 되어 있지 않은 n개의 데이터에 대하여 오름차순으로 정렬할 경우

    1. 기준값(i)과 인접한 값(i+1)을 비교
    2. 인접한 값이 더 작을 경우 두 값의 자리를 교환함
    3. index가 n-1인 위치에 가장 큰 값 위치
    4. 1~2의 과정을 반복, index가 n-2인 위치에 가장 큰 값 위치
    5. 1~2의 과정을 반복함 : 인접한 값이 포함된 배여르이 개수가 1개가 될 때까지 반복
    6. 정렬 완료

*/

// 버블정렬(bubble sort) 기본식 : index 0부터 시작 
for(i = N - 1; i > 0; i--){
    
    for(j = 0; j < i; j++){

        if(tmp[j] < tmp[j + 1]){

            swap(&tmp[j],&tmp[j+1]); //교환
        }
    }
}


// index 0부터 시작
void bubbleSort(int a[], int size){
    
    int i,j,t;
    int temp;

    printf("\n list :");

    for(t = 0; t<size; t++){
        printf("%d",a[t]);
    }

    printf("\n 실행 \n");

    for(i = size - 1; i > 0; i--){
        
        printf("\n step %d \n",size - i);

        for(j = 0 j < i; j++){

            if(a[j] > a[j+1]){

                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            };

        }

        printf("\n\n");

        for(t = 0; t < size; t++){
            printf("%3d", a[t]);
        }
    }
}
