#include <stdio.h>
#include <string.h>

int main()
{
	char name[25];
	int totalLength;

	printf("Enter your name.\n");
	gets(name);
	totalLength = strlen(name);
	printf("The length of %s is %d.", name, totalLength);

	return 0;
}
