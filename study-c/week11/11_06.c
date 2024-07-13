#include <stdio.h>
#include <stdlib.h>

int main(){

    // 파일이 없는 경우, NULL 반환 : error 출력
    FILE *f = NULL;

    f = fopen("2.txt","r");

    if(f == NULL){
        printf("error \n");
    }

    fclose(f);

    return 0;
}