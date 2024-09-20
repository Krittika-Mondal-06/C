#include <stdio.h>
#include <math.h>

int main() {
    int binaryNum[32], n, decimalNum = 0;

    printf("Enter the number of bits in the binary number: ");
    scanf("%d", &n);

    printf("Enter the binary number: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &binaryNum[i]);
    }

    // Convert binary to decimal
    for (int i = 0; i < n; i++) {
        decimalNum += binaryNum[i] * pow(2, n - i - 1);
    }

    printf("Decimal equivalent: %d\n", decimalNum);

    return 0;
}