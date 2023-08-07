
#include <stdio.h>

int main()
{
	int a, b, *x, *y, sum;
	printf("Enter a:\n");
	scanf("%d", &a);
	printf("Enter b:\n");
	scanf("%d", &b);

	x = &a;
	y = &b;
	sum = *x + *y;
	printf("The sum of a and b is %d.", sum);
	return 0;
}
