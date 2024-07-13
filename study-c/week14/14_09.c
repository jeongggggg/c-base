#include <stdio.h>

// n의 factorial 구하기
// 재귀함수
// 사용자 정의 함수 재귀함수 사용
int main(){

    int fac(int n){
        
        if(n <= 1){
            return 1;
        }

        else{
            return(fac(n - 1)*n);
        }
    }

    return 0;
}