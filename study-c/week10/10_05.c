#include <stdio.h>
#define MAX(x,y)(x>y?x:y)
#define SQ2(x)x*x

int main(){
    
    int x = 5, y = 6;

    printf("ans1 = %d \n", MAX(x,y)); // 결과 : 5 와 6 중 max 값 : 6
    printf("ans2 = %d \n", SQ2(x+y)); // 결과 : 5 + 6 * 5 + 6 : 30 + 5 + 6

    return 0;
}