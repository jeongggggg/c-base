#include <stdio.h>

int i = 100; // 전역변수

void printVal(int);
void printVal2();

int main(){

    int i = 1; // 지역변수

    printf("i=%d \n",i);
    printVal(i);
    printVal2();
    printf("i=%d \n", i);

    return 0;
}

void printVal(int i){ // 지역변수
    printf("i=%d \n",i);
}

void printVal2(){
    printf("i=%d \n",i); // 전역변수
}