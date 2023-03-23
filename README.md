# C_program_language

```c

#include <stdio.h>

int main(void){
    int sell, money, change;
    int c5000, c1000, c500, c100;

    printf("물건 값을 입력하시오 : ");
    scanf("%d", &sell);

    printf("투입한 금액을 입력하시오 : ");
    scanf("%d", &money);

    change = money - sell;

    c1000 = change / 1000;
    change = change % 1000;

    c500 = change / 500;
    change = change % 500;

    c1000 = change / 100;
    change = change % 100;

    printf("거스름돈은 다음과 같습니다.");
  
    printf("\n천원권 : %d장\n", c1000);
    printf("오백원 동전 : %d개\n", c500);
    printf("백원 동전 : %d개\n", c100);

    return 0;
}
