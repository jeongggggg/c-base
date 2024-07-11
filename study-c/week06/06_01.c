#include <stdio.h>

// 포인터 변수와 배열

int main(){
    
    int arr[5] = {1,2,3,4,5};
    int *arptr;

    arptr = arr;

    int i;

    printf("\n\n");

    for(i=0;i<5;i++){
        printf("arr[%d]=%d\n",i,arr[i]);
        printf("arr[%d]=%d\n",i,arptr[i]); //arptr = 포인터 변수, 변수의 주소 값을 저장할 수 있음
        printf("arr[%d]=%d\n",i,*(arr+i)); // 한칸씩 이동하면 주소가 저장되어 있는 값
        printf("arr[%d]=%d\n",i,*(arptr+i));
    }
}