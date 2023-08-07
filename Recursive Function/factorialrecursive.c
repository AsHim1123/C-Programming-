// #include <stdio.h>
// int fact(int num);
// int main()
// {
// 	int num;
// 	printf("Enter a number.\n");
// 	scanf("%d", &num);
// 	printf("The factorial of given number is %d.", fact(num));
// 	return 0;
// }

// int fact(int num)
// {
// 	if (num == 1 || num == 0)
// 	{
// 		return 1;
// 	}
// 	return (num * fact(num - 1));
// }


#include <stdio.h>
void displayRecursive(int n)
{
	if (n > 20)
	{
		return;
	}
		else
	{
		printf("%d\t", n);
		displayRecursive(n + 1);
	}
}
int main()
{
	displayRecursive(10);
	return 0;
}


// #include <stdio.h>
// int fibo(int n);

// int main()
// {
// 	int n;
// 	printf("Enter a number : \n");
// 	scanf("%d", &n);
// 	for (int i = 0; i < n; i++)
// 	{
// 		printf("%d\t", fibo(i));
// 	}
// 	return 0;
// }
// int fibo(int n)
// {
// 	if (n <= 1)
// 	{
// 		return n;
// 	}
// 	else
// 	{
// 		return fibo(n - 1) + fibo(n - 2);
// 	}
// }

// #include <stdio.h>
// int sum(int n);
// int main()
// {
// 	int n;
// 	printf("Enter how many numbers\n");
// 	scanf("%d", &n);
// 	printf("TOTAL : %d", sum(n));
// 	return 0;
// }
// int sum(int n)
// {
// 	if (n == 0)
// 	{
// 		return 0;
// 	}
// 	else
// 	{
// 		int num;
// 		printf("Enter number: \n");
// 		scanf("%d", &num);
// 		return num + sum(n - 1);
// 	}
// }