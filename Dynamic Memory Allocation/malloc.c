#include <stdio.h>
#include <stdlib.h>
int main()
{
   int n, i, *p;
   printf("Enter the size of array.\n");
   scanf("%d", &n);

   p = (int *)malloc(n * sizeof(int));

   //  if (p==NULL)
   //{
   // printf("Memory Allocation fails.");
   //}
   for (i = 0; i < n; i++)
   {
      printf("Enter value of p[%d].\n", i + 1);
      scanf("%d", &p[i]);
   }
   for (i = 0; i < n; i++)
   {
      printf("%d is value and address is %d.\n", p[i], &p[i]);
   }
   return 0;
}
