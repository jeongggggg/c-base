#include <stdio.h>

/*
    함수 선언 방법
    1) main() 전에 사용자 정의 함수의 모든 코드를 나열함
    2) main() 전에 함수의 원형만 정의하고 main() 뒤에 함수의 모든 코드 나열함
*/

// 1번 방법
int createValue(){ // 사용자 정의 함수
    int i;

    printf("값을 입력하세요 : ");
    scanf("%d", &i);

    return i;
}

int main(){
    int i, j, k;

    i=createValue(); //함수의 호출
    j=createValue();
    k=createValue();

    printf("i=%d j=%d k=%d \n", i, j, k);
    

    return 0;
}

// 2번 방법
int createValue2(); // 함수의 원형

int main2(){
    int i, j, k;

    i=createValue2();
    j=createValue2();
    k=createValue2();

    printf("i=%d j=%d k=%d \n", i, j, k);
    

    return 0;
}

int createValue2(){ // 함수 원형, 함수 코드의 반환되는 데이터 타입, 함수명, 매개변수의 타입, 매개변수의 개수가 반드시 일치해야 함
    int i;

    printf("값을 입력하세요 : ");
    scanf("%d", &i);

    return i;
}