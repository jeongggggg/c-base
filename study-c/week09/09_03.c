#include <stdio.h>

// 구조체 예제

struct student{ 
    int num;
    float kor;
    float eng;
    float c;
};

int main(){

    struct student a1,a2,a3;

    // 같은 형식의 코드를 여러 번 반복해야 함 : 코드가 길어지며, 에러가 발생할 가능성이 있음. 09_04 개선 코드
    printf("1번의 성적(국어, 영어, C활용)입력 : \n");

    scanf("%f", &a1.kor);
    scanf("%f", &a1.eng);
    scanf("%f", &a1.c);

    printf("2번의 성적(국어, 영어, C활용)입력 : \n");

    scanf("%f", &a2.kor);
    scanf("%f", &a2.eng);
    scanf("%f", &a2.c);

    printf("3번의 성적(국어, 영어, C활용)입력 : \n");

    scanf("%f", &a3.kor);
    scanf("%f", &a3.eng);
    scanf("%f", &a3.c);

    printf("1번 성적의 합 : %f \n",(a1.kor + a1.eng + a1.c));
    printf("2번 성적의 합 : %f \n",(a2.kor + a2.eng + a2.c));
    printf("3번 성적의 합 : %f \n",(a3.kor + a3.eng + a3.c));

    return 0;
}