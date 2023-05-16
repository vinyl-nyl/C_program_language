#include <stdio.h> // 헤더파일 호출
#include <math.h>

int menu(){ // 함수 menu(1~6 : 계산기 기능, 7 : 종료 출력, 메뉴 번호 입력) 선언
    int n; // 변수 n 선언
    printf("1. 팩토리얼\n");
    printf("2. 싸인\n");
    printf("3. 로그(base 10)\n");
    printf("4. 제곱근\n");
    printf("5. 순열(nPr)\n");
    printf("6. 조합(nCr)\n");
    printf("7. 종료\n");
    printf("선택해주세요 : ");
    scanf("%d", &n); // 변수 n에 사용자 입력 값 복사

    return n; // 변수 n값 반환
}

void factorial(){ // 팩토리얼 함수 선언
    long long n, result = 1, i; // long long형 변수 n, result, i 선언, result값 1로 초기화
    printf("정수를 입력하시오 : "); // "정수를 입력하시오" 출력
    scanf("%lld", &n); // 변수 n에 사용자 입력 값 복사
    for(i = 1; i <= n; i++){ // 변수 i가 1부터 변수 n의 값까지 1씩 증가하는 반복문
        result = result * i; // 변수 result의 값에 result * i값 저장
    }
    printf("결과 = %lld\n\n", result); // "결과 = result값" 출력
}

void sine(){ // 싸인 함수 선언
    double a, result; // 실수형 변수 a, result 선언
    printf("각도를 입력하시오 : "); // "각도를 입력하시오" 출력
    scanf("%lf", &a); // 변수 a에 사용자 입력 값 복사
    result = sin(a); // sin함수 호출, 매개변수 값을 변수 a로 넣고, 값을 result에 복사
    printf("결과 = %lf\n\n", result); // "결과 = result값" 출력
}

void logBase10(){ // 로그 함수 선언
    double a, result; // 실수형 변수 a, result 선언
    printf("실수값을 입력하시오 : "); // "실수값을 입력하시오" 출력
    scanf("%lf", &a); // 변수 a에 사용자 입력 값 복사
    if(a <= 0.0){ // 만약 변수 a의 값이 0.0보다 작거나 같다면,
        printf("오류\n"); // "오류" 출력, 줄바꿈
    } else{ // 아니라면,
        result = log10(a); // 내장함수 log10을 호출, 매개변수 값으로 변수 a를 넣고, 함수의 반환값을 result에 복사
        printf("결과 = %lf\n\n", result); // "결과 = result값" 출력
    }
}

int main(){
    while(1){ // while(true) = faulse가 될 때까지 돌아감 = 무한루프
        switch (menu()) //switch함수로 menu함수의 반환값으로 조건문 실행 
        {
        case 1: // menu() 반환값이 1이면,
            factorial(); // 팩토리얼 함수 호출
            break; // case 1: 탈출
        case 2: // menu() 반환값이 2면,
            sine(); // 싸인 함수 호출
            break; // case 2: 탈출
        case 3: // menu() 반환값이 3이면,
            logBase10(); // 로그 함수 호출
            break; // case 3: 출
        case 7: // menu() 반환값이 7이면,
            printf("종료합니다.\n"); // "종료합니다"출력
            return 0; // 0을 반환해 가까운 반복문(while(1) = 무한루프) 탈출
        default: // menu() 반환값이 1, 2, 3, 7이 아니라면,
            printf("잘못된 선택입니다.\n\n"); // "잘못된 선택입니다"출력
            break; // default 탈출
        }
    }
}