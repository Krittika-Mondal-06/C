#include <stdio.h>

int main() {
    int n, pos, element;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return 1;
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Shift elements to the right starting from the insertion position
    for (int i = n - 1; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the element at the specified position
    arr[pos - 1] = element;

    printf("Array after insertion:\n");
    for (int i = 0; i < n + 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}