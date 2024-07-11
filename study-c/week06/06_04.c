#include <stdio.h>

// 포인터 변수의 연산

int main(){

    int i = 10;
    int *ptr;
    ptr = &i;

    printf("case2 (*ptr)++ \n");

    (*ptr)++;
    printf("&i=%d i=%d \n",&i,i);
    printf("ptr=%d *ptr=%d \n", ptr,*ptr);  // ptr,*ptr : // ptr이 저장한 주소가 가르키는 값을 증가한 후 포인터 변수의 값, 포인터 변수가 저장한 주소가 가르키는 값
    
    return 0;
}

