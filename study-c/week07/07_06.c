#include <stdio.h>
#include <time.h>

// 07_05 코드에서 register 사용

int main(){

    time_t start, end;
    register int i,sum2 = 0;

    start = clock(); // 1clock은 1ms

    for(i=1;i<1000000;i++){
        if(i%2 == 0){
            sum2 += i;
        }
    }

    end = clock();

    printf("sum = %d \n", sum2);
    printf("time = %5.2lfms \n", (double)(end - start));
}