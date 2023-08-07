#include <stdio.h>
#include <string.h>
int main()
{
    int n, i, j;
    char name[40][40];
    char temp[40];

    printf("Enter a number.\n");
    scanf("%d", &n);
    printf("Enter the names:\n");
    for (i = 1; i <= n; i++)
    {
        scanf("%s", name[i]);
    }
    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= n; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    printf("Names in ascending order:\n");
    for (i = 1; i <= n; i++)
    {
        printf("%s\n", name[i]);
    }
    return 0;
}
