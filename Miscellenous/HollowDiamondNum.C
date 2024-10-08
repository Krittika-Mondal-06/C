// C Program to print the hollow diamond pattern using
// numbers
#include <stdio.h>
int main()
{
    int n = 5;

    // first outer loop to iterator through each row
    for (int i = 0; i < 2 * n - 1; i++) {
        // assigning values to the comparator according to
        // the row number
        int comp;
        if (i < n) {
            comp = 2 * (n - i) - 1;
        }
        else {
            comp = 2 * (i - n + 1) + 1;
        }

        // first inner loop to print leading whitespaces
        for (int j = 0; j < comp; j++) {
            printf(" ");
        }

        // second inner loop to print number and inner
        // whitespaces
        for (int k = 0; k < 2 * n - comp; k++) {
            if (k == 0 || k == 2 * n - comp - 1) {
                printf("%d ", k + 1);
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
