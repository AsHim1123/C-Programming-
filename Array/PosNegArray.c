#include <stdio.h>
int main()

{
    int n, i, a[10];
    printf("Enter a number:\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter number %d\n", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            printf("Positive Number:%d\n", a[i]);
        }
        if (a[i] < 0)
        {
            printf("Negative Number:%d\n", a[i]);
        }
    }
    return 0;
}