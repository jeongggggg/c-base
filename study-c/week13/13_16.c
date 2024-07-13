#include <stdio.h>
#define SIZE 6

// 선택정렬을 통하여 배열의 원소를 오름차순으로 정렬하는 프로그램
// 기준위치 : 왼쪽 첫 번째 원소(index : 0) 부터 시작

void SelectionSort(int a[],int);

int main(){

    int list[SIZE] = {0};
    int i;

    printf("enter element. SIZE=%d \n", SIZE);

    for(i = 0; i < SIZE; i++){
        scanf("%d", list + i);
    }

    SelectionSort(list,SIZE);

    return 0;
}

void SelectionSort(int a[], int size){
    
    int i, j, t, min;
    int temp;

    printf("\n list :");

    for(t = 0; t<size; t++){
        printf("%d",a[t]);
    }

    printf("\n 실행 \n");

    for(i = 0; i < size - 1; i++){
        min = i;

        for(j = i + 1; j < size; j++){
            if(a[j]<a[min]){
                min = j;
            }
        }

        // swap
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;

        printf("\n step %d :",i + 1);

        for(t = 0; t < size; t++){
            printf("%3d", a[t]); // 3d -> 3자리로 노출
        }
    }
}
