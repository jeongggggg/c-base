#include <stdio.h>
#define SIZE 5

// 배열 포인터 변수
int * getArr();
int oddArr();

int main(){

    int i;

    printf("홀수의 갯수 = %d \n",oddArr());

    return 0;
}

int *getArr(){

    int i;
    static int a[SIZE] = {0}; // 여기로 리턴

    for(i=0;i<SIZE;i++){
        printf("a[%d] = \n", i);
        scanf("%d",a+i);
    }

    return a;
}

int oddArr(){

    int *a,i,size;

    a = getArr(); // 배열을 리턴 = 배열의 주소를 리턴

    int odd = 0;
    //size = sizeof(a)/sizeof(a[0]);

    for(i=0;i<SIZE;i++){
        if(a[i]%2 == 1){
            odd++;
        }
    }
    return odd;
}
