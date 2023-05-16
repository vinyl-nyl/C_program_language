#include <stdio.h>
#include <math.h>

void print_func(); // print_func() 초기형 선언

int main(){
    print_func(); // print_func() 호출

    double pi = 3.1415926535; // 실수형 변수 pi선언 및 초기값 지정
    double x, y; // 실수형 변수 x, y선언

    x = pi / 2; // 변수 x에 pi를 2로 나눈 값을 복사
    y = sin(x); // 변수 y에 sin()을 이용해 x의 sin값을 복사
    printf("sin( %f ) = %f\n", x, y); // x(pi의 절반)값과 y(x의 sin)값 출력
    y = cos(x); // 변수 y에 cos()을 이용해 x의 cos값을 복사
    printf("cos( %f ) = %f\n", x, y); // x(pi의 절반)값과 y(x의 cos)값 출력
}

void print_func(){  // print_func() 정의
    printf("10의 3승은 %.0f.\n", pow(10.0, 3.0)); // 제곱함수(pow)를 사용, 10의 3승을 구해 출력
    printf("16의 제곱근은 %.0f.\n", sqrt(16));     // 제곱근을 구하는 함수(sqrt)를 사용, 16의 제곱근을 구한 뒤 출력
}