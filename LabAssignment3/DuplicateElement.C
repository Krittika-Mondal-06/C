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

    // Find and remove duplicates
    int uniqueCount = 0;
    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            arr[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }

    // Print the array with duplicates removed
    printf("Array with duplicates removed:\n");
    for (int i = 0; i < uniqueCount; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}