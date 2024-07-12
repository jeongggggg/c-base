// #define_CRT_SECURE_NO_WARNINGS // 비주얼 스튜디오에서 scanf_s 로 입력 받는 것을 sacnf로 입력받을 수 있게 함
#include <stdio.h>
#include <string.h>

struct st{
    
    char name[20];
    int age;
    char address[100];
};

void printSt(struct st p){ // 반환값 없음, 구조체 매개변수 한 개 지정
    
    // 구조체 매개변수 멤버의 값 출력
    printf("이름 : %s \n", p.name);
    printf("나이 : %d \n", p.age);
    printf("주소 : %s \n", p.address);
}

int main(){

    struct st p1;

    strcpy(p1.name,"홍길동");
    p1.age = 26;
    strcpy(p1.address, "서울시 성동구");

    printSt(p1); // 함수를 호출할 때 구조체 변수 전달, 멤버가 복사됨

    return 0;
}