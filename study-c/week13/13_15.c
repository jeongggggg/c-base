#include <stdio.h>

void swap(int *, int *);

int main(){

    int a[5] = {1,4,2,3,6};
    int i,j;

    for(i=0;i<5;i++){
        printf("%d",a[i]);
    }

    for(i=0;i<5;i++){
        for(j=i;j<5;j++){
            if(a[i] > a[j]){
                swap(&a[i],&a[j]);
            }
        }
    }

    printf("\n");

    for(i=0;i<5;i++){
        printf("%d",a[i]);
    }

    return 0;
}

void swap(int *n1, int *n2){

    int temp;

    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

// 결과 정렬안됨