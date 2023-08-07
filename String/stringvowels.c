#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];
    int i, k;
    int count = 0;
    printf("Enter a string.\n");
    scanf("%s", string);

    k = strlen(string);

    for (i = 0; i < k; i++)
    {
        if (string[i] == 'a' || string[i] == 'A' || string[i] == 'e' || string[i] == 'E' || string[i] == 'i' || string[i] == 'I' || string[i] == 'o' || string[i] == 'O' || string[i] == 'u' || string[i] == 'U')
        {
            count = count + 1;
        }
    }
    printf("Number of Vowels = %d", count);
    return 0;
}