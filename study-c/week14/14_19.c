#include <stdio.h>

void printArr(int a[], int);

int MinArr(int a[],int);

int main(){

    int a[5] = {0};
    int i;

    for(i = 0; i < 5; i++){
        printf("a[%d] : \n", i);
        scanf("%d",a+i); //&a[i]
    }

    printArr(a,5);
    printf("min value = %d \n", MinArr(a,5));
    return 0;
}

void printArr(int a[], int n){
    
    int i;

    for(i = 0; i < 5; i++){
        printf("a[%d]=%d \n", i,a[i]);
    }
}

int MinArr(int a[], int n){

    int i, min;
    min = a[0];

    for(i = 0; i < n; i++){
        if(a[i] < min){ // 부등호 반대로 하면 max 값
            min = a[i];
        }
    }

    return min;
}