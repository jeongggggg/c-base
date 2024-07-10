#include <stdio.h>

// 세수 i, j, k 를 입력 받고 max 값 구하기
int main() {
   
   int i,j,k,max;
   scanf("%d%d%d", &i,&j,&k); // 세 수는 모두 다르다는 가정을 함
    i>j?max=i:max=j;
    max>k?max=max:max=k;
    printf("max=%d\n",max); 
   
   return 0;
}