#include <stdio.h>
int main()
{

    int n, temp, sum = 0, rem;

    for (int i = 100; i <= 999; i++)
    {
         n = i;
        while (i > 0)
        {
            rem = i % 10;
            sum = sum + rem * rem * rem;
            i = i / 10;
        }
        if (sum = i)
        printf("%d\t", sum);
    }

  
    return 0;
}