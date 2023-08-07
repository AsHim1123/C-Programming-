#include <stdio.h>
#include <math.h>

int main()
{
    float x, sum, term, xdegree, pi = 3.13;
    int i;

    printf("Enter the value of x in deg: ");
    scanf("%f", &x);

    xdegree = x;
    x = x * pi / 180;
    sum = term = x;

    for (i = 1; i <= 10; i++)
    {
        term = -term * x * x;
        sum += term;
    }

    printf("The tan(%.2f) = %.3f\n", xdegree, sum);
    return 0;
}
