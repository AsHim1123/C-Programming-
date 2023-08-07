#include <stdio.h>
#include <string.h>
int main()
{

    char string[25];
    char string1[30];

    printf("Enter a string.\n");
    scanf("%s", string);

    strcpy(string1, string);

    if (strcmp(string1, strrev(string)) == 0)
    {
        printf("%s is a palindrome.", string1);
    }
    else
    {
        printf(" %s is not a palindrome.", string1);
    }
    return 0;
}