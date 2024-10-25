/*Write a C program to count the number of lines in a file.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) //The file name will be provided as a command line argument.
{
    FILE *file;
    char ch;
    int lineCount = 0;

    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    // Open the file in read mode
    file = fopen(argv[1], "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            lineCount++;
        }
    }

    // Close the file
    fclose(file);

    printf("Number of lines: %d\n", lineCount);

    return 0;
}

/* **Compilation**
* $gcc -o Q2_LoC Q2_LoC.c
* $./Q2_Loc Code_Party.txt //Executing Command Line Arguments
* Number of lines: 15
*/