#include <stdio.h>
int main()
{
    int i = 100;
    int *p = &i;
    printf("The address of i is %u.\n", p);
    printf("The value of i is %d.\n", *p);
    p++;
    printf("The address of i is %u.\n", p);
    printf("The value of i is %d.", *p);
    return 0;
}