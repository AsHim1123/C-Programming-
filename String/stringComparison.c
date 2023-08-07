#include <stdio.h>

int main()
{
	char firstname[25];
	char lastname[25];

	printf("Enter first name:\n");
	gets(firstname);
	printf("Enter last name:\n");
	gets(lastname);

	if (strcmpi(firstname, lastname) == 0)
	{
		printf("Both strings are equal.");
	}
	else
	{
		printf("Both Strings are not equal.");
	}
	return 0;
}
