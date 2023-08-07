#include <stdio.h>
#include <conio.h>

int power(int y, int x);
int main()
{
    int y, x;
    int p;

    printf("Enter x and y.\n");
    scanf("%d %d ", &x, &y);

    p = pow(y, x);
    printf("Y raise to x is %d", p);
    return 0;
}
int power(int y, int x)
{
    int p = 1, i;
    for (i = 1; i <= x; i++)
    {
        p = p * y;
    }
    return p;
}