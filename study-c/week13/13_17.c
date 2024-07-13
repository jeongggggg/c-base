#include <stdio.h>
#define SIZE 8

// 삽입정렬 예제

void insertionSort(int a[], int size);

int main(){

    int list[SIZE] = {0};
    int i;

    printf("enter element. SIZE=%d \n", SIZE);

    for(i = 0; i < SIZE; i++){
        scanf("%d", list + i);
    }

    insertionSort(list,SIZE);

    return 0;
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