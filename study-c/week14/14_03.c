#include <stdio.h>

// 선택정렬

int main(){

    for(i = 0; i < N-1; i++){ //정렬범위
    
        min = i;

        for(j = i + 1; j < N; j++){
            if(tmp[j] < tmp[min]){
                min = j;
            }
        }

       change(tmp[i],tmp[min])
    }

    return 0;
}