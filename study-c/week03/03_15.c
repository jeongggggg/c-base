#include <stdio.h>

// 이중 for문을 사용하여 구구단(2~5단) 출력하기.
// n단은 제외
int main(){

    int n;
    int i, j;

    printf("2~5단까지 출력합니다. \n 2~5단 중 제외할 단을 입력하세요 \n dan : ");
    scanf("%d", &n);

    for(i = 2; i <= 5; i++){
        printf("\n");

        if(i == n){
            continue;
        }
        printf("<< %d 단 >> \n", i);
        
        for(j=1;j<=9;j++){
            printf("%d * %d = %d \n", i, j, i*j);
        }
    }

    return 0;
}