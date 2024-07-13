#include <stdio.h>
#define SIZE 5

void printArr(int a[], int);

int main(){

    int a[SIZE] = {0};
    int i;

    for(i = 0; i < SIZE; i++){ // 1)
        printf("a[%d] : \n", i);
        scanf("%d",a+i); //&a[i] : 배열에 대해서 하나씩 입력 받음 
    }

    printArr(a,SIZE); //2) 배열을 전달 인사로 보낼 때는 이름만 쓴다.
    
    return 0;
}

void printArr(int a[], int n){ //3) 매개변수로 받을 때는 배열이라는 표시를 위해 꺽새 [] 표시
    
    int i;

    for(i = 0; i < n; i++){
        printf("a[%d]=%d \n", i,a[i]);
    }
}