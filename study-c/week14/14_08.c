#include <stdio.h>

// 1~n까지의 짝수 혹은 홀수의 개수 구하기

int main(){

   int a[SIZE] = {0}; 
   int i, odd = 0, even = 0;

   for(i=0; i<SIZE; i++){ 

        printf("%d번째 수 : \n", i);
        scanf("%d",&a[i]);

        if(a[i]%2 == 0){
            even++;
        }

        else{
            odd++;
        }
   }
    return 0;
}