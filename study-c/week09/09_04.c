#include <stdio.h>

// 09_03 코드 개선

struct student{ 
    int num;
    float kor;
    float eng;
    float c;
};

int main(){

    struct student a[3];
    int i;

    for(i = 0; i < 3; i++){
        printf("%d번의 성적(국어, 영어, C활용)입력 : \n", i + 1);

        scanf("%f",&a[i].kor);
        scanf("%f",&a[i].kor);
        scanf("%f",&a[i].kor);
    }

    return 0;
}