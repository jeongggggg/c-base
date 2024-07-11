#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// i가 6이 나올 때까지 주사위를 던지고, i가 6이 나올 때까지 몇 번 시도 했는지를 출력하는 프로그램

int main(){
    srand((unsigned)time(NULL));

    int i, j = 0;

    for (;;){ // 무한 루프 시작 ;;은 무한 루프를 의미함

        j++;

        i = rand() % 6 + 1;

        printf("i=%d \n", i);

        if(i == 6){
            break;
        }
    }

    printf("총 %d회만에 6나옴 \n", j);

    return 0;
}