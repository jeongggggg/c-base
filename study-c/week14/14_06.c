#include <stdio.h>

// 최대, 최소 구하기

int main(){

   int a[5] = {1,2,3,4,5};
   int i,n,max,min;

    // 최대
   max = a[0];

   for(i = 1; i < 5; i++){
        if(max < a[i])
        max = a[i];
   }

   printf("max = %d \n", max);

    // 최소
   min = a[0];

   for(i = 1; i < 5; i++){
    if(min > a[i]){
        min = a[i];
    }
   }
   printf("min = %d \n", min);


    return 0;
}