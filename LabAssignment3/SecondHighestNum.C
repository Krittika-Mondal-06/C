#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int firstHighest = arr[0], secondHighest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > firstHighest) {
            secondHighest = firstHighest;
            firstHighest = arr[i];
        } else if (arr[i] > secondHighest && arr[i] != firstHighest) {
            secondHighest = arr[i];
        }
    }

    printf("Second highest element: %d\n", secondHighest);

    return 0;
}