// 예를 들어서 100만원으로 재테크를 시작한 사람이
// 1년에 30%의 수익을 얻는다면
// 몇 년만에 원금의 10배가 되는지를 계산하여 보자

#include<stdio.h>

int main(){
    int money, year = 0, seed_money = 0;

    printf("투자할 원금을 입력하세요 : ");
    scanf("%d", &seed_money);
    money = seed_money;

    while(1){
        year++;
        money += money*0.30;
        if(money > 10*seed_money){
            break;
        }
    }
    printf("%d년이 걸립니다.", year);
    return 0;
}
