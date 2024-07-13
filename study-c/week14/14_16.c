#include <stdio.h>
#include <stdlib.h>
#define MAX(x,y) (x>y?x:y)

int vari = 10; // 전역변수
int getVal();

void printBigVal(int, int); // 사용자 정의 함수

int main(){
    
    int i, j;

    i = getVal();
    j = getVal();

    printBigVal(i,j);

    return 0;
}

int getVal(){
    
    int n;
    
    printf("정수를 입력하세요 : \n");
    scanf("%d",&n);

    return n;
}

void printBigVal(int n1, int n2){
    printf("x = %d y = %d Big Val = %d \n", n1, n2, MAX(n1,n2));
}