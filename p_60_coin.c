#include <stdio.h>
#include <stdlib.h> // 헤더파일 호출
#include <time.h>

int coin_toss(void); // 재귀함수 원형 선언

int main() {
    int toss; // 반복문에서 증가할 변수 선언
    int heads = 0; // 동전의 앞면으로 쓸 변수 heads 선언
    int tails = 0; // 동전의 뒷면으로 쓸 변수 tails 선언
    srand((unsigned)time(NULL)); //
    
    for (toss = 0; toss < 100; toss++){ //변수 toss가 0~99까지 증가하는 반복문
        if (coin_toss() == 1) { // 재귀함수 coin_toss의 반환 값이 1일 경우,
            heads++;            // 변수 heads를 1증가
        } else {                // 아니라면
            tails++;            // 변수 tails를 1증가
        }
    }
    printf("동전의 앞면 : %d\n", heads); // 동전의 앞면인 heads 출력
    printf("동전의 뒷면 : %d\n", tails); // 동전의 뒷면인 tails 출력

    return 0; // 0 반환
}

int coin_toss(void){ // 재귀함수 coin_toss를 정수형 반환타입과 매개변수가 없는 형태로 지정
    int head = rand() % 2; // 변수 head에 무작위 값의 나머지 값(%2로 떨어지니 0 또는 1)을 복사
    return head; // 변수 head를 반환
}
