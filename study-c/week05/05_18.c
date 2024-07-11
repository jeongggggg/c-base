#include <stdio.h>
#define N 5 // 학생 번호

// 학생들의 봉사시간을 '*' 로 표시하는 프로그램

int main(){

    int num[N] = {0};
    int i, j;

    for(i=0;i<N;i++){
        printf("%d번째 학생의 봉사시간 =", i+1);
        scanf("%d",&num[i]);
    }

    for(i=0;i<N;i++){
        for(j=1;j<=num[i];j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}