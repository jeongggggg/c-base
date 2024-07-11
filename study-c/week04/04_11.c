#include <stdio.h>

// 사칙연산을 수행하는 사용자 정의함수를 자유롭게 정의하고 작성

void add(int, int);
void sub(int, int);
void mul(int, int);
void div(int, int);

int main(){

    int i, j, choice;

    printf("사칙연산을 수행할 두 수를 입력하세요 \n");
    scanf("%d %d", &i, &j);

    printf("어떤 연산을 수행하시겠습니까? 1)add 2)sub 3)mul 4)div");
    scanf("%d", &choice);

    switch(choice){

        case 1:
            add(i, j);
            break;

        case 2:
            sub(i, j);
            break;

        case 3:
            mul(i, j);
            break;

        case 4:
            div(i, j);
            break;

        default:
            printf("error\n");
            break;
        
    }
}

void add(int a, int b){
    printf("%d + %d = %d \n", a, b, a + b);
}

void sub(int a, int b){
    printf("%d - %d = %d \n", a, b, a - b);
}

void mul(int a, int b){
    printf("%d * %d = %d \n", a, b, a * b);
}

void div(int a, int b){
    printf("%d / %d = %f \n", a, b, a / (float) b);
}