#include <stdio.h>
#define N 5 // 학생 번호

// 05_18을 활용하여, 학생들의 봉사시간을 '*' 로 표시하고 봉사점수와 총합의 평균을 출력하는 프로그램

int main(){

    int num[N] = {0};
    int sum = 0;
    float avg;

    int i, j;

    for(i=0;i<N;i++){
        printf("%d번째 학생의 봉사시간 =", i+1);
        scanf("%d",&num[i]);
        sum += num[i];
    }

    for(i=0;i<N;i++){
        for(j=1;j<=num[i];j++){
            printf("*");
        }
        printf("\n");
    }

    printf("봉사시간 합 =%d 평균 = %f \n", sum, sum / (float)N);

    return 0;
}