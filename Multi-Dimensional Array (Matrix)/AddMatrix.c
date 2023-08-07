#include <stdio.h>
int main()
{
    int i, j, x, y, a[5][5], b[5][5], c[5][5];

    printf("Enter order of matrix.\n");
    scanf("%d %d", &x, &y);

    printf("Enter the elements of 1st matrix:\n");
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
            scanf("%d", &a[i][j]);
    }
    printf("Enter the elements of 2nd matrix:\n");
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
            scanf("%d", &b[i][j]);
    }
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
            c[i][j] = a[i][j] + b[i][j];
    }
    printf("Resultant Matrix:\n");
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
            printf("%d\t", c[i][j]);
        printf("\n");
    }
    return 0;
}
