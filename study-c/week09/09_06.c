#include <stdio.h>

// 구조체 배열을 통하여 멤버 값을 입력 받고, 결과와 같이 출력하는 프로그램

struct student{ 
    int num;
    float kor;
    float eng;
    float c;
};

int main(){

    struct student a[3];
    int i;
    float sum[3] = {0};

    for(i = 0; i < 3; i++){
        printf("%d번의 성적(국어, 영어, C활용)입력 : \n", i + 1);

        scanf("%f",&a[i].kor);
        scanf("%f",&a[i].kor);
        scanf("%f",&a[i].kor);

        sum[i] = sum[i] + a[i].kor + a[i].eng + a[i].c;
    }

    for(i = 0; i < 3; i++){

        printf("%d번 : %f %f %f, sum = %f \n", i + 1,a[i].kor,a[i].eng,a[i].c, sum[i]);
    }

    return 0;
}