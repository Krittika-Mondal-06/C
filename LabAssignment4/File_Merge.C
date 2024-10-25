/*Write a C program to merge the contents of two files into a third file.*/

#include <stdio.h>

int main() {
    FILE *file1, *file2, *file3;
    char fileName1[100], fileName2[100], fileName3[100], ch;

    // Open the first source file
    printf("Enter the first source file name: ");
    scanf("%s", fileName1);
    file1 = fopen(fileName1, "r");

    if (file1 == NULL) {
        printf("Cannot open file %s\n", fileName1);
        return 1;
    }

    // Open the second source file
    printf("Enter the second source file name: ");
    scanf("%s", fileName2);
    file2 = fopen(fileName2, "r");

    if (file2 == NULL) {
        printf("Cannot open file %s\n", fileName2);
        fclose(file1);
        return 1;
    }

    // Open the destination file
    printf("Enter the destination file name: ");
    scanf("%s", fileName3);
    file3 = fopen(fileName3, "w");

    if (file3 == NULL) {
        printf("Cannot open file %s\n", fileName3);
        fclose(file1);
        fclose(file2);
        return 1;
    }

    // Copy contents from first source file to destination file
    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, file3);
    }

    // Copy contents from second source file to destination file
    while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, file3);
    }

    printf("Files merged successfully.\n");

    fclose(file1);
    fclose(file2);
    fclose(file3);

    return 0;
}


/* **Compilation**
* $gcc Q5_File_Merge.c -o Q5_File_Merge
* $./Q5_File_Merge
* Enter the first source file name: Code_Party.txt
* Enter the second source file name: Code_Party_2.txt
* Enter the destination file name: Code_Party_Merge.txt
* Files merged successfully.
*/
