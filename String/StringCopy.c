#include <stdio.h>
#include <string.h>

int main()
{
	char name[25];
	char copyname[25];

	printf("Enter a name.\n");
	gets("name");

	strcpy(copyname, name);

	printf("Name is %s", name);
	return 0;
}
