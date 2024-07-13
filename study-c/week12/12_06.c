#include <stdio.h>

int main(){

    char a; //1
    char b[10]; //2
    
    printf("a=");
    a = getchar(); //3
    putchar(a); //4
    getchar(); //5
    printf("\nb=");
    gets(b); //6
    puts(b); //7

    return 0;
}