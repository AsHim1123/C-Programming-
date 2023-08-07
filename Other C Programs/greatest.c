#include <stdio.h>
int main()
{
	int a;
	int b;
	int c;
	printf("Enter the value of a\n");
	scanf("%d", &a);
	printf("Enter the value of b\n");
	scanf("%d", &b);
	printf("Enter the value of c\n");
	scanf("%d", &c);
	if (a > b && a > c)
	{
		printf("a is the greatest.\n");
	}
	else if (b > a && b > c)
	{
		printf("b is the grestest.\n");
	}
	else
	{
		printf("c is the grestest.\n");
	}
	return 0;
}
