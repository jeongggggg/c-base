#include <stdio.h>
#define N 2
#define S 3

// 05_15을 활용하여 성적의 합과 평균을 출력하는 프로그램

int main(){
    
    int num[N][S] = {0};
    int sum[N] = {0};
    int i, j;

    for(i=0;i<N;i++){
        for(j=0;j<S;j++){
            printf("%d반의 %d번째 성적 =", i+1,j+1);
            scanf("%d", &num[i][j]);
            sum[i] += num[i][j];
        }
    }

    for(i=0;i<N;i++){
        printf("%d반의 성적의 합 = %d 평균 = %f \n", i+1,sum[i],sum[i]/(float)S);
    }

    return 0;
}
