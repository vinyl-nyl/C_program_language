#include <stdio.h>
#include <math.h>

void print_function(); // 함수의 초기형 선언

int main(){
    double result, value = 1.6; // 실수형 변수 result, value 선언 및 value 초기값으로 1.6 지정
    // p.70의 floor(내림함수), ceil(올림함수)함수 사용
    result = floor(value);   // value의 값 1.6을 내림한 1.0을 result에 복사
    printf("%lf\n", result); // result값을 출력

    result = ceil(value);    // value의 값 1.6을 올림한 2.0을 result에 복사
    printf("%lf\n", result); // result값을 출력

    print_function();        // 함수 print_function() 호출
}

// p.71의 fabs(절대값 반환 함수) 사용
void print_function(){ // print_function 함수 정의
    printf("12.0의 절대값은 %f\n", fabs(12.0));   // 12.0의 절대값을 fabs()로 반환 후 출력
    printf("-12.0의 절대값은 %f\n", fabs(-12.0)); // -12.0의 절대값을 fabs()로 반환 후 출력
}