#include <stdio.h>
#include <stdlib.h>

// fgetc(); fputc();
int main()
{
	FILE *fp;
	char ch;

	fp = fopen("ashim.txt", "r");

	if (fp == NULL)
	{
		printf("No File Found.\n");
	}

	while (ch != EOF)
	{
		ch = fgetc(fp);
		printf("%c", ch);
	}
	fclose(fp);

	return 0;
}
