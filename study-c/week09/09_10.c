#include <stdio.h>

// 구조체 멤버 출력

struct customer{
    int num;
    char name[20];
    double point;
};

int main(){

    struct customer a1 = {1, "kim", 109.99};
    
    printf("num = %d name = %s point = %lf \n", a1.num,a1.name,a1.point);

    return 0;
}