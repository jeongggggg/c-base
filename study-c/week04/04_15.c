#include <stdio.h>

// 04_14.c 를 활용하여 n이 소수인지 아닌지 판단하는 프로그램
// -1을 입력하기 전까지 계속하여 소수 여부를 판정하고 -1을 입력하면 반복을 멈추는 프로그램

int prime(int);

int main(){

    int n, tmp;

    while(1){
        printf("n=");
        scanf("%d", &n);

        if(n == -1){
            break;
        }

        tmp = prime(n);

        if(tmp == 1){
            printf("%d = prime number \n", n);
        }

        else{
            printf("%d = not prime number \n", n);
        }
    }

    return 0;
}

int prime(int a){
    
    int i, j = 0;

    for(i=1; i<=a; i++){
        if(a % i == 0){
            j++;
        }
    }

    if(j == 2){
        return 1;
    }

    else{
        return 0;
    }
}