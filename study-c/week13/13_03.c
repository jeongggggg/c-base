#include <stdio.h>

// X 올림차순으로 정렬 => 아래 코드는 정렬이 불가

void swap(int, int);

int main(){

    int a[5] = {1,4,2,3,6};
    int i, j;

    for(i=0;i<5;i++){
        
        for(j=0;j<5;j++){

            if(a[i] > a[j]){
                swap(a[i],a[j]); // 여기가 불가함
            }
        }
    }

    printf("\n");

    for(i=0;i<5;i++){
        printf("%d",a[i]);
    }

    return 0;
}

// 값을 인자로 주고 지역 변수로 받기 때문에 함수가 끝나면 지역 변수는 사라짐 = 정렬이 제대로 되지 않음
// 해결 방법 : 인자를 전달할 때 주소를 전달하거나 포인터 변수를 사용하여 전달

void swap(int n1, int n2){

    int temp;

    temp = n1;
    n1 = n2;
    n2 = temp;
}

// 배열의 이름 또는 하나하나의 위치를 이용해서 주소를 찾아갈 수 있게 수정(원본을 이용해 주소를 사용)
// 포인터 변수나 주소를 이용하여 찾아서 원본을 바로바로 바꿀 수 있도록 변경이 필요.