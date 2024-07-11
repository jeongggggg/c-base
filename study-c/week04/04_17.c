#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// i가 6이 나올 때까지 주사위를 던지고, i가 6이 나올 때까지 1~6이 나온 빈도를 체크하는 프로그램

void game();

int main(){

    game();

    return 0;
}

void game(){

    srand((unsigned)time(NULL));

    int freq[6] = {0};

    int i, j = 0, k;

    for (;;){

        j++;

        i = rand() % 6 + 1;

        printf("i=%d \n", i);

        freq[i-1]++;

        if(i == 6){
            break;
        }
    }

    for(k=0;k<6;k++){
        printf("%d = %d번 \n", k + 1, freq[k]);
    }
}
