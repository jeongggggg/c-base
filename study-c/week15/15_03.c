#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

/*
    <동적메모리 활용>
    - num level, name의 멤버를 갖는 user 구조체에 대하여 SIZE만큼 동적인 메모리 확보
    - SIZE만큼의 데이터 입력 후 입력 받은 데이터를 차례로 출력
*/

struct user{

    int num;
    char level; // G(Gold),S(Silver),B(Bronze)로 레벨 구분
    char name[50];
};

int main(){

    int i;
    struct user *puser;

    puser = (struct user*)malloc(SIZE*sizeof(struct user));

    if(puser == NULL){
        printf("error \n");
        exit(1);
    }

    for(i=0; i<SIZE; i++){

        scanf("%d",&puser[i].num);
        getchar();

        scanf("%c",&puser[i].level);
        getchar();

        gets(puser[i].name);
    }

    for(i=0;i<SIZE;i++){
        printf("%d %c %s \n", puser[i].num, puser[i].level, puser[i].name);
    }

    return 0;
}