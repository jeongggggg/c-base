#include <stdio.h>

// 포인터 변수의 연산

int main(){

    int i = 10;
    int *ptr;
    ptr = &i;

    printf("case3 (*ptr)++ \n");

    // (*ptr)++;
    *(++ptr);

    printf("&i=%d i=%d \n",&i,i);
    printf("ptr=%d *ptr=%d \n", ptr,*ptr);  // ptr,*ptr : // ptr이 저장한 주소가 가르키는 값을 증가한 후 ptr의 주소를 앞으로 이동
    
    return 0;
}

