#include <stdio.h>

// 구조체 배열의 초기값을 각각 출력하는 프로그램

struct student{ 
    int num;
    float kor;
    float eng;
    float c;
};

int main(){
    
    int i;

    struct student a[3] = {
        {1, 100, 90, 80},
        {2, 90, 90, 80},
        {3, 100, 100, 100}
    };

    for(i = 0; i < 3; i++){
            printf("%d번 : %f %f %f \n",a[i].num,a[i].kor,a[i].eng,a[i].c);
    };

    return 0;
}