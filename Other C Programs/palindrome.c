#include <stdio.h>

int main()
{

    int rem, n;
    printf("Enter a number.\n");
    scanf("%d", &n);

    while (n > 0)
    {
        rem = n % 10;
        printf("%d", rem);
        n = n / 10;
    }
    if (rem = n)
        printf("\nIt is a palindrome.");
    else
    {
        printf("\nIt is not an palindrome.");
    }

    return 0;
}
