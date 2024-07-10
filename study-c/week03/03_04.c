#include <stdio.h>

// for문을 사용하여 초기값 1부터 10까지 1씩 증가. 단, i가 7의 배수인 경우 반복을 종료할 것
int main(){

    int i = 1;
    
    for(i=1; i<=10; i++){
        if(i%7 == 0){
            break;
        }
        printf("i=%d\n", i);
    }

    return 0;
}