//
//  c-test.c
//  study-c
//
//  Created by 조아정 on 7/9/24.
//

#include <stdio.h>

int main(void){
   /*
   printf("100\n"); // 문자열
   printf("5.5\n"); // 문자열
   printf("%d\n", 100); // 100이라는 데이터를 가져다가 10진 정수로 변환해서 출력해라
   printf("%g\n", 5.5); // 5.5라는 데이터를 가져다가 실수형으로 바꿔서 출력해라
   printf("%d %g\n", 10, 5.5); // 순서대로 출력
   */
   
   /*
   printf("%d + %d = %d\n", 10, 20, 30); // +를 문자형으로 출력하라는 내용임
   printf("%d + %d = %d\n", 10, 20, 10+20); // 10+20은 데이터라서 연산이 됨 (결과 30)
   */
   
   /*
   printf("%d\n", 10) ;
   printf("%c\n", 65) ;
   printf("%g\n", 10.0) ;
   */
   
   /*
   int a; // 변수 a만 확보
   a = 50; // 확보한 a에 값을 넣으려면 int를 지워야함
   
   int n = 50;
   
   printf("%d\n", a);
   printf("%d\n", n+1); // 오른쪽은 연산이 가능하여 50 + 1이됨 (결과 51)
   */
   
   /*
   int a; // 변수 a만 확보
   a = 50;
   char n = 'A';
   
   printf("%d\n", a);
   printf("%d\n", sizeof(a)); // a을 저장한 메모리의 크기
   printf("%c\n", n);
   printf("%d\n", sizeof(n)); // n을 저장한 메모리의 크기 => 결과값 1, 1비트라는 뜻
   */
   
   /* 중요함 !! 값이 어떻게 바뀌고 들어갸는지 아는 것이 중요함.
   int a = 10;
   int b = 20;
   
   int t = a;
   printf("%d %d %d\n", a, b, t); // 10 20 10
   
   a = b;
   printf("%d %d %d\n", a, b, t); // 20 20 10
   
   b = t;
   printf("%d %d %d\n", a, b, t); // 20 10 10
   */
   
   /*
   printf("%d %c\n", 65,65);
   printf("%d %c\n", 'A','A'); // 문자 'A' 의 ASCII 코드값 65를 의미
   */
   
   int n = 15;
   printf("제 나이는 %d 입니다. \n", n);
   
   return 0;
}
