#include <stdio.h>
int main()
{
    int a, b;
    char opr;
    printf("Enter a:\n");
    scanf("%d", &a);
    printf("Enter b:\n");
    scanf("%d", &b);

    printf("Enter an operator.\n");
    scanf("%c", &opr);

    switch (opr)
    {
    case '+':
        printf("SUM:%d", a + b);
        break;

    case '-':
        printf("SUB:%d", a - b);
        break;

    case '*':
        printf("PRODUCT:%d", a * b);
        break;

    case '/':
        printf("DIVISION:%d", a / b);
        break;

    default:
        printf("INVALID OPERATOR!!!");
    }
    return 0;
}
