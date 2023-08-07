#include <stdio.h>
#include <string.h>
int main()
{
    char name[30], address[30];
    int num;

    FILE *fp;
    fp = fopen("rec.txt", "a");
    int n, i;
    printf("Enter how many datas you want to store.\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Enter the person's name, address and the number.\n");
        scanf("%s %s %d", name, address, &num);
    }
    fprintf(fp, "%s %s %d", name, address, num);
    fclose(fp);

    fp = fopen("rec.txt", "r");

    printf("Name\t Address\t Number\n");
    while (fscanf(fp, "%s %s %d", name, address, &num) != EOF)
    {
        printf("%s %s %d", name, address, num);
    }
    fclose(fp);
    return 0;
}
