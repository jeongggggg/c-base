#include <stdio.h>

int main(){

    int a[3]={1,2,3};
    int *ip;
    ip = a; //a가 주소임

    printf("a의 주소 = %p \n", a);
    printf("a의 주소에 들어있는 값 = %d \n", *a);
    printf("ip에 들어있는 값 = %p \n", ip);
    printf("ip안에 들어있는 주소가 가리키는 값 = %d \n", *ip);

    return 0;
}