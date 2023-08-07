#include <stdio.h>

int main()
{
  int n, i, nn, flag = 1;
  printf("Enter a number.\n");
  scanf("%d", &n);

  for (nn = 2; nn <= n; nn++)
  {

    flag = 1;
    for (i = 2; i <= nn / 2; i++)
    {
      if (nn % i == 0)
      {
        flag = 0;
        break;
      }
    }
    if (flag == 1)
    {
      printf("%d\n", nn);
    }
  }
  return 0;
}