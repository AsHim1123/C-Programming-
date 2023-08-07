#include <stdio.h>

int main()
{
    char s1[20];
    int i, len = 0;
    printf("Enter a string : ");
    scanf("%s", s1);
    for (i = 0; s1[i] != '\0'; i++)
        len++;
    printf("The length of the given string is %d.", len);
    return 0;
}