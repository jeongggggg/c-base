#include <stdio.h>

// n명의 성적을 입력한 후 합과 평균 구하기.
// 성적에 -1을 입력하면 반복 탈출
int main(){

   double grade, sum = 0.0, average;
   int num = 1;

   while(1){
        printf("%d번 학생 성적 : ", num);
        scanf("%lf", &grade);

        if(grade == -1){
            break;
        }

        num++;
        sum += grade;
   }

   average = sum / (num - 1);
   printf("sum = %1f  average = %1f. \n", sum, average );

    return 0;
}