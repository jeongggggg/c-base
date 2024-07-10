#include <stdio.h>

// 다음의 문장을 다중 if ~ else 로 변환
// 연산식을 적어보세요(+와-만 연산가능) : 1+2

int main(){

    // switch(op){
    //     case '+' :
    //                 printf("%d + %d = %d \n", i,j,i+j);
    //                 break;
    //     case '+' :
    //                 printf("%d - %d = %d \n", i,j,i-j);
    //                 break;

    //     default :
    //                 printf("Wrong operation \n");
    //                 break;
    // }

    int i,j;

    char op;

    printf("연산식을 적어보세요(+와-만 연산가능);");
    scanf("%d%c%d", &i,&op,&j);

    if(op == '+'){
        printf("%d + %d = %d \n", i,j,i+j);
    }
    else if(op == '+'){
        printf("%d + %d = %d \n", i,j,i-j);
    }
    else{
        printf("Wrong operation \n");
    }
}