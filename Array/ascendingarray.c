#include <stdio.h>

int main()
{
	int i, n, j;
	int num[n];
	int temp;
	printf("Enter a number.\n");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Enter number %d:\n", i + 1);
		scanf("%d", &num[i]);
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (num[i] < num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}

	for (i = 0; i < n; i++)
	{
		printf("%d\n", num[i]);
	}

	return 0;
}
