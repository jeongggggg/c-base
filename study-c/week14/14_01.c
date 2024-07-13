#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 12

// 동적 메모리를 사용하여 구조체 배열 관련 코드 작성

// 포인터 변수가 동적 메모리에 필요한 이유? - 동적 메모리는 메모리를 할당하고, 메모리에 주소를 반환해주는데 주소를 받는 포인터 변수가 필요하다.

struct st{ // 구조체

    int num;
    char dept[20];
};

int main(){

    struct st *stp; // 구조체 형식으로 한 포인터 변수

    stp = (struct st *)malloc(SIZE*sizeof(struct st));

    stp[0].num = 1; // 포인터 변수를 배열처럼 사용해 여러 개를 쓸 수 있다.
    strcpy(stp[0].dept,"swEngineering");

    return 0;
}