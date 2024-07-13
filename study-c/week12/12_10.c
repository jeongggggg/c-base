#include <stdio.h>
#include <string.h>

// 소비자의 댓글, 빈도수 분서 등에 사용될 수 있음

int main(){

    char s1[] = "hi my name is kim hanyang nice to meetyou";
    char deli[] = "\n\t";
    char *sperToken;

    sperToken = strtok(s1,deli);

    while(sperToken != NULL){
        printf("word = %s /n", sperToken);
        sperToken = strtok(NULL,deli);
    }

    return 0;
}