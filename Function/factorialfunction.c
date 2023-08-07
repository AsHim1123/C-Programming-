#include <stdio.h>

int fact(int num)
{
    int i, fact = 1;
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int num;
    printf("Enter a number.\n");
    scanf("%d", &num);

    printf("The factorial is %d.", fact(num));

    return 0;
}