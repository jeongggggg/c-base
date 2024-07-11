#include <stdio.h>

// 05_06 배열을 활용하여 학생들의 총점의 평균과, 평균의 평균을 구하는 프로그램
// 첫번째 열은 총점, 두번째 열은 평균

int main(){

    int i,j,sum=0, sum2=0;
    int score2[3][2] = {{200,100},{180,90},{150,75}};

    for(i=0;i<3;i++){
        sum1=sum1+score2[i][0];
        sum2=sum2+score2[i][1];
    }

    printf("총점의 평균은 %f \n", sum1/3.0);
    printf("평균의 평균은 %f \n", sum2/3.0);

    return 0;
}