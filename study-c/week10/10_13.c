#include <stdio.h>
#include <stdlib.h>
#define TMP 20 // 해당 라인 실행 시. 결과 1 : OK

int main(){

    int TMP = 20; // 지역변수 TMP, 해당 라인 실행 시. 결과 2 : $$$

    #if TMP == 10
    printf("..\n");

    #elif TMP == 10
    printf("OK \n");

    #else
    printf("$$$ \n");

    #endif

    return 0;
}