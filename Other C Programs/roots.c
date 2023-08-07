#include <stdio.h>
#include <math.h>

int main()
{

	int a, b, c, m, n, x;

	printf("Enter a,b,c:\n");
	scanf("%d %d %d", &a, &b, &c);

	x = sqrt(b * b - 4 * a * c);

	m = (-b + x) / 2 * a;
	n = (-b - x) / 2 * a;

	if (x > 0)
	{
		printf("Roots are distinct.\n");
	}
	else if (x < 0)
	{
		printf("Roots are imaginary.\n");
	}
	else
	{
		printf("Roots are same.\n");
	}

	printf("m=%d\n", m);
	printf("n=%d", n);

	return 0;
}
