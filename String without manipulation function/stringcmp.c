#include <stdio.h>

int main()
{
    int i;
    char s1[10], s2[10];
    printf("Enter string 1: ");
    scanf("%9s", s1);
    printf("\nEnter string 2: ");
    scanf("%9s", s2);

    for (i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
        {
            if (s1[i] > s2[i])
            {
                printf("String 1 is greater.\n");
            }
            else
            {
                printf("String 2 is greater.\n");
            }
            return 0;
        }
    }

    if (s2[i] != '\0')
    {
        printf("String 2 is greater.\n");
    }
    else
    {
        printf("Strings are equal.\n");
    }

    return 0;
}
