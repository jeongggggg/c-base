#include <stdio.h>

// while문을 사용하여 초기값 1부터 10까지 1씩 증가. 단, i가 7의 배수인 경우 출력하지 않을 것
int main(){

    int i = 0;
    
    while(i<=10){
        i++;
        if(i % 7 == 0)
        continue;
        printf("i=%d\n", i);
    }

    return 0;
}