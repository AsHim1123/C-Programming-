#include <stdio.h>

int main() {
    int decimal;
    int binary[32]; // Assuming a 32-bit binary representation

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    int i;
    for (i = 0; decimal > 0; i++) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
    }

    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
