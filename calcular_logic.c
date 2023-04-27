#include <stdio.h>

int main()
{
    char op;
    int x, y, result;
    printf("수식을 입려하시오(예: 2 + 5) >> ");
    scanf("%d %c %d", &x, &op, &y);

    switch(op){
        case '+':
            result = x + y;
            break;
        case '-':
            result = x - y;
            break;
        case '*':
            result = x * y;
            break;
        case '/':
            result = x / y;
            break;
        case '%':
            result = x % y;
            break;
        default:
            printf("수식을 잘못입력했습니다.\n");
    }
    printf("%d %c %d = %d\n", x, op, y, result);

    return 0;
}
