#include <stdio.h> // 헤더파일 호출
#include <time.h> // time 헤더파일

int main(){
    time_t start, end; // time_t(time함수의 반환형)타입 변수 start, end 선언
    start = time(NULL); // 변수 start에 time함수 호출, 초기값을 NULL로 지정
    printf("10초가 되면 아무 키나 누르세요.\n"); //"10초가 되면 아무 키나 누르세요" 출력
    while (1) // while(treu) = 무한루프
    {
        if(getchar()){ // 만약 입력받은 문자열이 없다면,
            break; // 반복 종료
        }
    }
    printf("종료되었습니다.\n"); // "종료되었습니다" 출력
    end = time(NULL); // 변수 end에 time함수 호출, 초기값을 NULL로 지정
    printf("경과된 시간은 %ld 초입니다. \n", end - start); // "경과된 시간은 end값 - start값" 출력
    return 0; // 0 반환
}