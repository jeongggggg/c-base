#include <stdio.h>

int main(){
    
    int n;
    float fn;

    scanf("%d",&n); //문자열 형태로 입력, 이후 %d형태로 변환
    scanf("%f",&fn); //문자열 형태로 입력, 이후 %f형태로 변환

    // 소수점이 정밀도보다 많을 경우 : 반올림

    printf("%-10d \n",n);
    printf("%+10d \n",n);
    printf("%10d \n",n);
    printf("%010d \n",n);
    printf("%-10.2f \n",fn);
    printf("%+10.2f \n",fn);
    printf("%10.2f \n",fn);
    printf("%.2f \n",fn);

    return 0;
}