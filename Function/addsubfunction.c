
#include <stdio.h>
int sum(int a, int b)
{
	int sum = a + b;
	return sum;
}
int sub(int a, int b)
{
	int sub = a - b;
	return sub;
}

int main()
{
	int a, b;
	printf("Enter a:\n");
	scanf("%d", &a);
	printf("Enter b:\n");
	scanf("%d", &b);
	printf("The sum is %d", sum(a, b));
	printf("The sub is %d", sub(a, b));

	return 0;
}
