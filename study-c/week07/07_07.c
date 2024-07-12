#include <stdio.h>

// static을 사용하여 다음의 코드를 case1과 case2에 대하여 각각 실행

int exampleStatic();

int main(){
    int i = 0, j;  // 메인 함수만 전역 변수

    for(j=1; j<=3; j++){
        printf("i = %d \n", exampleStatic(i));
    }

    return 0;
}

// 기억을 하면서 변화

// case1
int exampleStatic(int i){

    static int si = 1;

    si++;

    printf("si = %d \n", si);

    return i + si;

}

// case2
int exampleStatic(int i){

    int si = 1;

    si++;

    printf("si = %d \n", si);

    return i + si;

}