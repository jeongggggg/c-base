#include <stdio.h>

/*
    - 정수 a를 1로 초기화
    - 증감연산자(++)를 이용하여 a를 10까지 출력(1씩 증가)
    - 반복문 사용할 것
*/
int main() {

    int a=1;

    for(a=1; a<=10; a++){
        printf("a=%d\n", a);
    }
    return 0;
}