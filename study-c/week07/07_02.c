#include <stdio.h>

void iChange(int); //함수의 원형, 프로토타입

int main(){

    int i = 1;
    printf("첫번째 i = %d \n", i);

    iChange(i);

    printf("두번째 i = %d \n", i);

    return 0;
}

void iChange(int i){ // 함수가 종료되면 지역변수도 사라짐
    i++;
}