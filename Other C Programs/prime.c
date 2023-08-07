#include <stdio.h>
#include <stdlib.h>
int main()

{
    int n, i;

    printf("Enter a number.\n");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            printf("Not Prime.\n");
            break;
        }
    
    if (i = n)
        printf("Prime.");
}
    return 0;
}