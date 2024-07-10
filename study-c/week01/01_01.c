#include <stdio.h>

// 입력 받은 수가 짝수인지 홀수인지 판단하여 출력하기
int main() {
   
   int i;
   scanf("%d", &i);

   if(i%2 == 0){
      printf("짝수\n");
   }
   else{
      printf("홀수\n");
   }

   // i%2 == 0 ? printf("짝수\n") : printf("홀수\n");
   
   return 0;
}