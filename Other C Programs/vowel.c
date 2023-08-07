// #include <stdio.h>
// int main()
// {
// 	char letter;
// 	char islowercase, isuppercase;
// 	printf("Enter a letter.\n");
// 	scanf("%c", &letter);

// 	islowercase = (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u');
// 	isuppercase = (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U');

// 	if (islowercase || isuppercase)
// 	{
// 		printf("%c is a vowel.\n", letter);
// 	}
// 	else
// 	{
// 		printf("%c is not a vowel.", letter);
// 	}
// 	return 0;
// }
#include <stdio.h>

int main() {
    char s[10];
    printf("Enter: ");
    scanf("%s", s);

    char rem[3] = {'z', 'Z', '\0'};
    for (int i = 0; s[i] != '\0'; i++) {
        int remove = 0; // Flag to check if the character needs to be removed
        for (int j = 0; rem[j] != '\0'; j++) {
            if (s[i] == rem[j]) {
                remove = 1;
                break;
            }
        }

        if (remove) {
            continue; // Skip this character
        }

        printf("%c", s[i]);
    }

    return 0;
}

