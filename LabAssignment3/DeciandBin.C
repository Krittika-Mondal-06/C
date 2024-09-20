#include <stdio.h>

int main() {
    int decimalNum, binaryNum[32], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    // Convert decimal to binary
    while (decimalNum > 0) {
        binaryNum[i] = decimalNum % 2;
        decimalNum /= 2;
        i++;
    }

    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
    printf("\n");

    return 0;
}