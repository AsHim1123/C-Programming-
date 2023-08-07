#include <stdio.h>
int main()
{
    int marks[3];
    int i;
    int *p;
    p = &marks[0]; // p=marks;

    for (i = 0; i < 3; i++)
    {
        printf("Enter the marks of stduent %d:\n", i + 1);
        scanf("%d", p);
        p++;
    }
    for (i = 0; i < 3; i++)
    {
        printf("The marks of student %d is %d\n.", i + 1, marks[i]);
    }
    return 0;
}