#include <stdio.h>

int main(){

    int i = 10;

    printf("i의 주소 = %p \n", &i);
    printf("i의 주소가 가르키는 값 = %d \n", *(&i));

    return 0;
}