#include <stdio.h>

struct student {
    int rollno;
    char name[50];
    char address[100];
    int age;
    float marks;
};

void readStudents(struct student students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollno);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Address: ");
        scanf("%s", students[i].address);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
}

void displayStudents(struct student students[], int n) {
    printf("\nStudent Details:\n");
    printf("----------------\n");
    printf("%-10s %-20s %-30s %-10s %-10s\n", "Roll No", "Name", "Address", "Age", "Marks");
    printf("----------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-10d %-20s %-30s %-10d %-10.2f\n", students[i].rollno, students[i].name, students[i].address, students[i].age, students[i].marks);
    }
}

int main() {
    struct student students[12];
    int n = 12; // Assuming 12 students

    readStudents(students, n);
    displayStudents(students, n);

    return 0;
}