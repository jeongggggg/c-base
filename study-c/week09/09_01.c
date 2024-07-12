#include <stdio.h>

// 구조체 멤버를 지유롭게 초기화 후 결과 출력

struct student{ // struct
    int num; // 학번
    char dept[20]; // 학과
    char name[20]; // 이름
    int grade; // 학년
}; // student;

int main(){

    struct student a1 = {1,"sw","lee",2};

    printf("num = %d \n denpt = %s \n name = %s \n grade = %d \n", a1.num, a1.dept, a1.name, a1.grade);

    return 0;

}