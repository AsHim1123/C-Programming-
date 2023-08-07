#include <stdio.h>
int main()
{

  int a = 0, b = 1, c, n, i;
  printf("Enter a number.\n");
  scanf("%d", &n);

  printf("%d\t %d\t", a, b);

  for (i = 1; i <= n; i++)
  {
    c = a + b;
    printf("%d\t", c);
    a = b;
    b = c;
  }

  return 0;
}