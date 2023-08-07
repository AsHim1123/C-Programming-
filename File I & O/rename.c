#include <stdio.h>

int main()
{
    char ch[40] = "hello";
    FILE *fp;
    fp = fopen("ashim.txt", "w");

    fprintf(fp, "%s", ch);

    fp = fclose(fp);

    rename("ashim.txt", "seesa.txt");
    remove("seesa.txt");

    return 0;
}