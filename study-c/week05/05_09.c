#include <stdio.h>

// 세 과목의 강의를 듣는 학생은 각각 2명씩 입니다.
// 각 학생의 성적을 입력받고, 학생별 성적의 합과 평균을 구해보세요.
// int score[2][3];

int main(){

    int score[2][3];
    int i,j,sum[2]={0}, avg[2]={0};

    for(i=0;i<2;i++){
        for(j=0;j<3;j++){

            printf("%d번 학생의 %d번째 성적 입력 : ", i+1,j+1);
            scanf("%d",&score[i][j]);

            sum[i] = sum[i] + score[i][j];
        }

        avg[i] = sum[i]/3.0;    
    }

    for(i=0;i<2;i++){
        printf("%d번째 학생의 총점 : %d, 평균 : %d \n", i+1,sum[i],avg[i]);
    }

    return 0;
    
}


