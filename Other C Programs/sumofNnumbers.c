#include <stdio.h>

int main()
{
     int n, i, sum = 0, nn;

     printf("Enter how many numbers do you wanna add?\n");
     scanf("%d", &n);

     printf("Enter the numbers.\n");
     for (i = 1; i <= n; i++)
     {
          scanf("%d", &nn);
          sum = sum + nn;
     }
     printf("Sum is %d.", sum);
     return 0;
}
