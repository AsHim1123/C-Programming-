#include <stdio.h>
int main()
{

    int i, num[20], n, sum = 0;
    printf("Enter how many numbers do you wanna add.\n");
    scanf("%d", &n);

    printf("Enter the numbers:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
        sum = sum + num[i];
    }

    printf("The sum of numbers is %d.", sum);

    return 0;
}