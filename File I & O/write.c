#include <stdio.h>
#include <string.h>

int main()
{
    char ch[40] = "Welcome to Nepal";
    FILE *fp;
    fp = fopen("file.txt", "w");

    fprintf(fp, "%s", &ch);

    fclose(fp);
    return 0;
}