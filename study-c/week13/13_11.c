#include <stdio.h>

void printArr(int a[], int);

int main(){

    int a[5] = {0};
    int i;

    for(i = 0; i < 5; i++){
        printf("a[%d] : \n", i);
        scanf("%d",a+i); //&a[i]
    }

    printArr(a,5); // 배열을 전달 인사로 보낼 때는 이름만 쓴다.
    
    return 0;
}

void printArr(int a[], int n){ // 매개변수로 받을 때는 배열이라는 표시를 위해 꺽새 [] 표시
    
    int i;

    for(i = 0; i < 5; i++){
        printf("a[%d]=%d \n", i,a[i]);
    }
}