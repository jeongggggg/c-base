#include <stdio.h>
#include <stdlib.h>

int main(){

    // 파일이 없는 경우, 파일이 생성됨
    FILE *f = NULL;

    f = fopen("1.txt","w");

    if(f==NULL){
        printf("error \n");
    }

    fclose(f);

    return 0;
}