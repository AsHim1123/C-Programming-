#include <stdio.h>
#include <string.h>
int main()

{
    int rn;
    char name[40];
    int m1, m2, m3;
    char ch[10];

    FILE *fp;
    fp = fopen("record.txt", "w");
    do
    {
        printf("Enter the roll number,name and marks of three subjects.\n");
        scanf("%d %s %d %d %d ", &rn, name, &m1, &m2, &m3);

        fprintf(fp, "%d %s %d %d %d ", rn, name, m1, m2, m3);

        printf("Press y to continue.\n");
        scanf("%s", ch);

    } while (strcmp(ch, "y") == 0 || strcmp(ch, "Y") == 0);

    fclose(fp);
    return 0;
}