#include <stdio.h>

// 구조체 멤버의 값을 scanf 함술ㄹ 이용하여 입력 받고, 출력

struct student{ // struct
    int num; // 학번
    char dept[20]; // 학과
    char name[20]; // 이름
    int grade; // 학년
}; // student;

int main(){

    struct student a1 = {1,"sw","lee",2};

    scanf("%d", &a1.num);
    scanf("%s", &a1.dept); //error &a1.dept -> a1.dept
    scanf("%s", &a1.name); //error &a1.name -> a1.name
    scanf("%d", &a1.grade);

    printf("num = %d \n denpt = %s \n name = %s \n grade = %d \n", a1.num, a1.dept, a1.name, a1.grade);

    return 0;

}