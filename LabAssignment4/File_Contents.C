#include <stdio.h>
#include <stdlib.h>

void printFileContents(const char *filename) {
    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        perror("Unable to open file");
        return;
    }

    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
}

int main(int argc, char *argv[]) //The file name will be provided as a command line argument.
{
    if (argc < 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    printFileContents(argv[1]);

    return 0;
}

/* **Compilation**
* $gcc Q3_File_Contents.c -o Q3_File_Contents
* $./Q3_File_Contents "Code_Party.txt" //Executing Command Line Arguments
* ___The Programming Language Party___
*/