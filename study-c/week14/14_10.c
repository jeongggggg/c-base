#include <stdio.h>

// n의 fibonacci
int main(){

    int fibo(int n){
        
        if(n <= 2){
            return 1;
        }

        else{
            return(fac(n - 2) + fibo(n - 1));
        }
    }

    return 0;
}