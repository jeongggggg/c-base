#include <stdio.h>
#define N 2
#define S 3

// N개 반에 대하여 각각 S개의 과목 점수를 저장하고 각 반의 성적의 합을 출력하는 프로그램

int main(){
    
    int num[N][S] = {0};
    int sum[N] = {0};
    int i, j;

    for(i=0;i<N;i++){
        for(j=0;j<S;j++){
            printf("%d반의 %d번째 성적 =", i+1,j+1);
            scanf("%d", &num[i][j]);
            printf("num[%d][%d]=%d \n",i,j,num[i][j]);
            sum[i] += num[i][j];
        }
    }

    for(i=0;i<N;i++){
        printf("%d반의 성적의 합 = %d \n", i+1,sum[i]);
    }

    return 0;
}
