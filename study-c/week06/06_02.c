#include <stdio.h>

// 포인터 변수의 연산

int main(){
    int i = 10;
    int *ptr=&i;

    printf("&i=%d i=%d \n",&i,i);
    printf("ptr=%d *ptr=%d \n", ptr,*ptr);  // ptr,*ptr : 포인터 변수의 값, 포인터 변수가 저장한 주소가 가르키는 값

    return 0;
}