#include <stdio.h>
#define SQ(x) ((x)*(x)) // 2+3*2+3
#define SQ2(x) x*x

// define로 함수 매크로 만들기

/*
    SQ는 (x)*(x)
    SQ2는 x*x
    따라서
    SQ(x+y)는 (2+3)*(2+3)
    SQ2(x+y)는 2+3*2+3
*/

int main(){
    
    int x = 2, y = 3;

    printf("ans1 = %d \n", SQ(x));
    printf("ans2 = %d \n", SQ(y));
    printf("ans3 = %d \n", SQ(x+y));
    printf("ans4 = %d \n", SQ2(x+y));
}