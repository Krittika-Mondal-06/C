#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    int mathMarks[n], englishMarks[n];

    printf("Enter the marks for %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Mathematics: ");
        scanf("%d", &mathMarks[i]);
        printf("English: ");
        scanf("%d", &englishMarks[i]);
    }

    printf("\nTotal marks for each student:\n");
    for (int i = 0; i < n; i++) {
        int totalMarks = mathMarks[i] + englishMarks[i];
        printf("Student %d: %d\n", i + 1, totalMarks);
    }

    return 0;
}