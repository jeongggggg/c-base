#include <stdio.h>

int i; // 전역 변수
void print_i(void);

int main(){

    int i = 10; // 지역 변수

    ++i;

    printf("i = %d \n", i); // 11

    print_i();

    return 0;
}

void print_i(void){

    ++i;

    printf("i = %d  \n", i);  // 1
}