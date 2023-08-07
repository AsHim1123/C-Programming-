#include <stdio.h>
int main()
{
    int i = 1;
    int *p;
    int **p_p;

    p = &i;
    p_p = &p;

    printf("The value of i is %d.", **p_p);

    return 0;
}