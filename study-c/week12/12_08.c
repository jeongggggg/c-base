#include <stdio.h>
#include <ctype.h>

// 좋아하는 과일이 몇 개인지 세어보는 프로그램

void countWord(char[], int);

int main(){

    char temp[50];

    printf("자기가 좋아하는 과일을 적어보세요(50자 이내, 스페이스바로 구분할 것) :");
    gets(temp);
    countWord(temp,50);

    return 0;
}

void countWord(char s[],int j){

    int i, k = 0, temp = 1;

    printf("your list : %s \n",s);

    for(i=0; s[i] != NULL; ++i){

        if(isalpha(s[i])){
            
            if(temp){
                k++;
                temp = 0;
            }
        }

        else{
            temp = 1;
        }

    }
    printf("my favorite fruit(num) : %d \n", k);
}