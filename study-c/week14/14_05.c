#include <stdio.h>

// 버블정렬

int main(){

    for(i = N - 1; i > 0; i--){
    
        for(j = 0; j < i; j++){

            if(tmp[j] < tmp[j + 1]){

                change(&tmp[j],&tmp[j+1]); //교환
            }
        }
    }

    return 0;
}