#include <stdio.h>

// 연산 결과는 맞추는 프로그램 작성, 아래와 같은 결과가 나오도록 프로그래밍 필요

/*
    >> 1+2의 답은 : 1
    1번째 기회, 틀렸습니다.. 다시 해보세요.
    >> 1+2의 답은 : 1
    2번째 기회, 틀렸습니다.. 다시 해보세요.
    >> 1+2의 답은 : 2
    3번째 기회, 틀렸습니다.. 다시 해보세요.
    >> 1+2의 답은 : 1
    4번째 기회, 틀렸습니다.. 다시 해보세요.
    >> 1+2의 답은 : 3
    5번째 기회, 틀렸습니다.. 다시 해보세요.

*/

int count(int);

int main(){

    int ans;

    while (1){

        printf("1+2의 답은:");
        scanf("%d", &ans); //sacnf_s

        if(count(ans) == 1){
            break;
        }
    }

    return 0;
}

int count(int n){
     
    static int i = 0;

    i++;

    if(n == 3){
        printf("%d번 만에 맞추셨습니다. 축하합니다. \n", i);
        return 1;
    }

    else{
        printf("%d째 기회. 틀렸습니다.. 다시 해보세요 \n", i);
        return 2;
    }
}