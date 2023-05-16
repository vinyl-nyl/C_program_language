#include <stdlib.h>
#include <stdio.h> // 헤더파일 호출
//#include <conio.h> 콘솔 입출력 헤더파일
#include <time.h>

void disp_car(int car_number, int distance){ // 함수 disp_car 선언 및 지정(반환타입이 없고, 매개변수 2개)
    int i; // 반복문에 사용할 변수 i 선언
    printf("CAR #%d:", car_number); // main()에서 받은 car_number 출력
    for(i = 0; i < distance/10; i++){ // 변수 i가 0부터 main()에서 받은 distance/10까지 1씩 증가하는 반복문
        printf("*"); // * 출력
    }
    printf("\n"); // 반복문이 끝나면 줄바꿈 실행
}

int main(){
    int i; // 반복문에 사용할 변수 i 선언
    int car1_dist = 0, car2_dist = 0, car3_dist = 0; // 경주에 참여하는 자동차 변수 선언 및 초기값 지정

    srand((unsigned)time(NULL)); //

    for(i = 0; i < 6; i++){ // 변수 i가 5까지 1씩 증가하는 반복문
        car1_dist += rand() % 100; // 1번 자동차 변수 값에 랜덤 값의 100으로 나눈 나머지 값을 더하고 복사
        car2_dist += rand() % 100; // 2번 자동차 변수 값에 랜덤 값의 100으로 나눈 나머지 값을 더하고 복사
        car3_dist += rand() % 100; // 2번 자동차 변수 값에 랜덤 값의 100으로 나눈 나머지 값을 더하고 복사
        disp_car(1, car1_dist); // 함수 disp_car를 호출, 매개변수 값으로 1과 변수 car1_dist를 넣음
        disp_car(2, car2_dist); // 함수 disp_car를 호출, 매개변수 값으로 2와 변수 car2_dist를 넣음
        disp_car(3, car3_dist); // 함수 disp_car를 호출, 매개변수 값으로 3과 변수 car3_dist를 넣음
        printf("---------------\n"); // 자동차들이 주행을 한 번 끝날 때마다 선으로 구분
        getchar(); //
    }
    return 0;
}
