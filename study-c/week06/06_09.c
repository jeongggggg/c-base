#include <stdio.h>

// 정수형 변수 i를 선언함
// 정수형 포인터 변수 ip를 선언함
// ip를 통하여 i의 주소를 확인함
// ip를 통하여 i에 들어있는 값을 20으로 변경함
// i의 값과 *ip의 값을 출력함

int main(){

    int i = 10; // 정수형 변수 i를 선언함
    int *ip; // 정수형 포인터 변수 ip를 선언함
    ip = &i; // ip를 통하여 i의 주소를 확인함

    printf("i의 주소 = %d \n", &i);
    printf("포인터 변수 ip의 값 = %d \n", ip);
    *ip=20; // ip를 통하여 i에 들어있는 값을 20으로 변경함
    printf("i의 값 = %d \n", i); // i의 값과
    printf("포인터 변수 ip가 가르키는 값 = %d \n", *ip); // *ip의 값을 출력함

    return 0;
}