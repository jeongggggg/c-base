#include <stdio.h>
#include <stdlib.h>

// 파일 입출력 함수

int main(){

    FILE *f, *f2;
    int i;
    char buffer[100];

    f1 = fopen("1.txt","r");

    if(f1 == NULL){
       printf("error \n");
    }

    f2 = fopen("3.txt","w");

    if(f2 == NULL){
       printf("error \n");
    }

    while(fgetc(buffer,100,f1) != NULL){

        fputs(buffer,f2);
    }

    fclose(f1);
    fclose(f2);

    return 0;
}