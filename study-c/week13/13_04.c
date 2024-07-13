#include <stdio.h>

// 주소를 받는 변수 : 포인터 변수

void swap(int* , int*);

int main(){

    int a[5] = {1,4,2,3,6};
    int i, j;

    for(i=0;i<5;i++){
        
        for(j=0;j<5;j++){

            if(a[i] > a[j]){
                swap(&a[i],&a[j]); // 가능
            }
        }
    }

    printf("\n");

    for(i=0;i<5;i++){
        printf("%d",a[i]);
    }

    return 0;
}

// *사용자 정의 함수를 이용해서 swap 알고리즘을 사용할 때는 반드시 주소(&)를 사용해야 한다.
void swap(int *n1, int *n2){

    int temp;

    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}