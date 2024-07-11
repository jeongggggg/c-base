#include <stdio.h>

// 소수(prime number)는 1과 자신만을 약수로 갖는 수
// n이 소수인지 아닌지 판단하는 프로그램 

int prime(int);
int main(){
    
    int n, tmp;
    
    printf("n =");
    scanf("%d", &n);

    tmp = prime(n);

    if(tmp == 1){
        printf("%d = prime number \n", n);
    }

    else{
        printf("%d = not prime number \n", n);
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