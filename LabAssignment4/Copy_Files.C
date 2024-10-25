/*Write a C program to copy the contents of one file to another file.*/

#include <stdio.h>

int main() {
    FILE *sourceFile, *destFile;
    char fileName[100], ch;

    // Open the source file
    printf("Enter the source file name: ");
    scanf("%s", fileName);
    sourceFile = fopen(fileName, "r");

    if (sourceFile == NULL) {
        printf("Cannot open file %s\n", fileName);
        return 1;
    }

    // Open the destination file
    printf("Enter the destination file name: ");
    scanf("%s", fileName);
    destFile = fopen(fileName, "w");

    if (destFile == NULL) {
        printf("Cannot open file %s\n", fileName);
        fclose(sourceFile);
        return 1;
    }

    // Copy the contents from source to destination
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully.\n");

    fclose(sourceFile);
    fclose(destFile);

    return 0;
}

/* **Compilation**
* $gcc Q4_Copy_Files.c -o Q4_Copy_Files
* $../Q4_Copy_Files
* Enter the source file name: Code_Party.txt
* Enter the destination file name: Code_Party2.txt
* File copied successfully.
*/