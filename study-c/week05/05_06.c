#include <stdio.h>

// 3행 2열의 값을 가진 2차원 배열의 요소

int main(){

    int i, j;

    int score2[3][2] = {{200,100},{180,90},{150,75}};

   printf("score[0][0]=%d \n", score2[0][0]);
   printf("score[0][1]=%d \n", score2[0][1]);
   printf("score[1][0]=%d \n", score2[1][0]);
   printf("score[1][1]=%d \n", score2[1][1]);
   printf("score[2][0]=%d \n", score2[2][0]);
   printf("score[2][1]=%d \n", score2[2][1]);

    return 0;
}