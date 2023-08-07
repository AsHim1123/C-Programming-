#include <stdio.h>
#include <string.h>

int main()
{
	char firstname[25];
	char lastname[25];
	char fullname[25];

	printf("Enter your first name.\n");
	gets(firstname);
	printf("Enter your last name.\n");
	gets(lastname);

	printf("Full name is %s.", strcat(firstname, lastname));

	return 0;
}
