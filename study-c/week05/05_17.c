#include <stdio.h>
#define N 2
#define S 3

// 05_17을 활용하여 각 반 및 각 과목의 성적의 합과 평균을 출력하는 프로그램

int main(){
    
    int num[N][S] = {0};
    int sum[N] = {0};
    int sum2[S] = {0};
    int i, j;

    for(i=0;i<N;i++){
        for(j=0;j<S;j++){
            printf("%d반의 %d번째 성적 =", i+1,j+1);
            scanf("%d", &num[i][j]);
            sum[i] += num[i][j];
        }
    }

      for(i=0;i<S;i++){
        for(j=0;j<N;j++){
            sum2[i] += num[j][i];
        }
    }

    for(i=0;i<N;i++){
        printf("%d반의 성적의 합 = %d 평균 = %f \n", i+1,sum[i],sum[i]/(float)S);
    }

    for(i=0;i<S;i++){
        printf("%d번째 과목의 성적의 합 = %d 평균 = %f \n", i+1,sum2[i],sum2[i]/(float)N);
    }

    return 0;
}
