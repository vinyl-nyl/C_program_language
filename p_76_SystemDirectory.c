#include <stdio.h> // 헤더파일 호출
#include <stdlib.h>

int main(){
    system("dir"); // 라이브러리 함수 system의 인자값을 dir로 받아 프로세스 호출
    printf("아무 키나 치세요.\n"); // "아무 키나 치세요" 출력
    getchar(); // 라이브러리 함수 getchar로 문자열의 첫 번째 값을 입력버퍼에 저장
    system("cls"); // 라이브러리 함수 system의 인자값을 cls로 받아 프로세스 호출

    return 0; // 0 반환
}