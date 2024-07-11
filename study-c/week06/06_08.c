#include <stdio.h>

int main(){

    int i = 10;
    int *ip;
    ip = &i;

    printf("i의 주소 = %p \n", &i);
    printf("i의 주소가 가르키는 값 = %d \n", *(&i));
    printf("포인터 변수 ip의 주소 = %p \n", &ip);
    printf("포인터 변수 ip의 값 = %d \n", ip); // 증감하는 모습을 보려면 d 또는 u,  printf("포인터 변수 ip의 값 = %q \n", ip);
    printf("포인터 변수 ip가 가르키는 값 = %d \n", *ip);

    return 0;
}