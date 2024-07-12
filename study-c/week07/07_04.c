#include <stdio.h>

void iChange();
void iGlobal();

int i = 1; //전역 변수

int main(){

    int i = 1; // 자동 변수

    printf("첫번째 i = %d \n", i);

    {
        register int i = 2; // 레지스터 변수

        printf("두번째 i = %d \n", i);
    }

    printf("첫번째 i = %d \n", i);
}

void iChange(){

    static int i = 1; //static 변수

    printf("i = %d \n", i);

    i++;
}

void iGlobal(){
    printf("global i = %d \n", i);
}

// .c로 하면 auto 사용 가능