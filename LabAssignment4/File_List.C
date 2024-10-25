/*Write a C program to list all files and sub-directories in a directory.*/

#include <stdio.h>
#include <dirent.h>

int main() {
    char dirName[100];
    struct dirent *de;

    // Prompt user for directory name
    printf("Enter the directory name: ");
    scanf("%s", dirName);

    // Open the directory
    DIR *dr = opendir(dirName);

    if (dr == NULL) {
        printf("Could not open directory %s\n", dirName);
        return 1;
    }

    // List all files and sub-directories
    printf("Contents of directory %s:\n", dirName);
    while ((de = readdir(dr)) != NULL) {
        printf("%s\n", de->d_name);
    }

    closedir(dr);
    return 0;
}


/* **Compilation**
* $gcc -o Q1_File_List Q1_File_List.c
* $./Q1_File_List
* Enter the directory name: D:\C_Assignment_Solutions\Assignment_4
* Contents of directory D:\C_Assignment_Solutions\Assignment_4:
* .
* ..
* Code_Party.txt
* Q1_File_List.c
* Q1_File_List.exe
*/