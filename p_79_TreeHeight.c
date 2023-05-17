#include <stdio.h> // 헤더파일 호출
#include <math.h> // math 헤더파일

int main(){
    double height, distance, tree_height, degrees, radians; // 실수형 변수 height, distance, tree_height, degrees, radians 선언

    printf("나무와의 길이(단위는 미터) : "); // "나무와의 길이(단위는 미터)" 출력
    scanf("%lf", &distance); // 변수 distance에 사용자 입력값 복사

    printf("측정자의 키(단위는 미터) : "); // "측정자의 키(단위는 미터)" 출력
    scanf("%lf", &height); // 변수 height에 사용자 입력값 복사

    printf("각도(단위는 도) : "); // "각도(단위는 도)" 출력
    scanf("%lf", &degrees); // 변수 degrees에 사용자 입력값 복사

    radians = degrees * (3.141592 / 180.0); // 변수 radians에 (dregrees값 * (pi/180))값 복사

    tree_height = tan(radians) * distance + height; //변수 tree_height에 ((탄젠트 함수 호출, 인자에 redians값 넣고)반환값 * distance값 + height값) 복사
    printf("나무의 높이(단위는 미터) : %lf\n", tree_height); // "나무의 높이(단위는 미터) : tree_height값" 출력

    return 0; // 0 반환
}