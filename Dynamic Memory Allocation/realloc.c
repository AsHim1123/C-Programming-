#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p, i;
    p = (int *)malloc(5 * sizeof(int));

    for (i = 0; i < 5; i++)
    {
        printf("Enter the value of %d element.\n", i + 1);
        scanf("%d", &p[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("The value of %d element is %d.\n", i + 1, p[i]);
    }

    // Reallocating memory from 5 to 10 according to requirement!

    realloc(p, 10 * sizeof(int));
    for (i = 0; i < 10; i++)
    {
        printf("Enter the value of %d element.\n", i + 1);
        scanf("%d", &p[i]);
    }

    for (i = 0; i < 10; i++)
    {
        printf("The value of %d element is %d.\n", i + 1, p[i]);
    }
}
