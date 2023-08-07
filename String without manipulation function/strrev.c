#include <stdio.h>

int main()
{
    char s1[10], s2[10];
    int i, j, len = 0;
    printf("Enter a string : ");
    scanf("%s", s1);
    for (i = 0; s1[i] != '\0'; i++)
    {
        len++;
    }
    j = 0;
    for (i = len - 1; i >= 0; i--)
    {
        s2[j] = s1[i];
        j++;
    }
    s2[j] = '\0';
    printf("The reversed string is %s.", s2);

    return 0;
}