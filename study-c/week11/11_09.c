#include <stdio.h>
#include <stdlib.h>

// 파일 입출력 함수

int main(){

    FILE *f = NULL;
    int i;
    char c;

    f = fopen("1.txt","w");

    if(f == NULL){
       printf("error \n");
    }

    while((c = gerchar()) != 'q'){

        fputc(c,f);
    }

    fclose(f);

    f = open("1.txt","r");

    while((c = fgetc(f)) != EOF){

        putchar(c);
    }

    fclose(f);

    return 0;
}