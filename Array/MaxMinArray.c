#include <stdio.h>

int main()
{

   int n, i, max, min, a[10];
   printf("Enter a number.\n");
   scanf("%d", &n);
   for (i = 0; i < n; i++)
   {
      printf("Enter the element %d:\n", i + 1);
      scanf("%d", &a[i]);
   }
   max = min = a[0];
   for (i = 0; i < n; i++)
   {
      if (a[i] > max)
      {
         max = a[i];
      }
      if (a[i] < min)
      {
         min = a[i];
      }
   }

   printf("MAX:%d\n", max);

   printf("MIN:%d\n", min);

   return 0;
}
