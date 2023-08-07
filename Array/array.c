#include <stdio.h>

int main()
{
	int i, n;
	int num[10];

	printf("Enter a number.\n");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Enter number %d:\n", i + 1);
		scanf("%d", &num[i]);
	}
	for (i = 0; i < n; i++)
	{
		printf("value of %d is %d.\n", i + 1, num[i]);
	}
	return 0;
}
