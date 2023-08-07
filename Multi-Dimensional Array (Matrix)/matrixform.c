#include <stdio.h>
int main()

{
   int i, j, x, y, a[5][5];
   printf("Enter order of matrix.\n");
   scanf("%d %d", &x, &y);
   printf("Enter the elemnts:\n");
   for (i = 0; i < x; i++)
   {
      for (j = 0; j < y; j++)
         scanf("%d", &a[i][j]);
   }

   for (i = 0; i < x; i++)

   {
      for (j = 0; j < y; j++)
         printf("%d\t", a[i][j]);
      printf("\n");
   }

   return 0;
}
