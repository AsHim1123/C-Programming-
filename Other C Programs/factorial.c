#include <stdio.h>

int main()
{
	int n, i, fact = 1;

	printf("Enter a number.\n");
	scanf("%d", &n);
	for (i = 1; i < n; i++) // for(i=n;i<0;i--)
	{

		fact = fact * i;
	}
	printf("Factorial is %d.", fact);

	return 0;
}
