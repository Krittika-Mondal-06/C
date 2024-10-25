#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/stat.h>
#include <string.h>

void listFilesRecursively(char *basePath) {
    struct dirent *dirent;
    struct stat statbuf;
    char path[1024];

    // Open the directory
    DIR *dir = opendir(basePath);
    if (!dir) {
        perror("Unable to open directory");
        return;
    }

    // Iterate through the directory entries
    while ((dirent = readdir(dir)) != NULL) {
        // Skip the "." and ".." entries
        if (strcmp(dirent->d_name, ".") == 0 || strcmp(dirent->d_name, "..") == 0) {
            continue;
        }

        // Form the complete path
        snprintf(path, sizeof(path), "%s/%s", basePath, dirent->d_name);

        // Get information about the file
        if (stat(path, &statbuf) == -1) {
            perror("Unable to get file status");
            continue;
        }

        // Print the file or directory name
        if (S_ISDIR(statbuf.st_mode)) {
            printf("Directory: %s\n", path);
            // Recurse into the sub-directory
            listFilesRecursively(path);
        } else {
            printf("File: %s\n", path);
        }
    }

    // Close the directory
    closedir(dir);
}

int main(int argc, char *argv[]) //Directory Path entry as a command line argument
{
    // Check for proper usage
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <directory_path>\n", argv[0]);
        return EXIT_FAILURE;
    }

    listFilesRecursively(argv[1]);
    return EXIT_SUCCESS;
}

/* **Compilation**
* $gcc Q1_File_Directory_List.c -o Q1_File_Directory_List
* $./Q1_File_Directory_List "D:\C_Assignment_Solutions\Assignment_4"
* File: D:\C_Assignment_Solutions\Assignment_4/Code_Party.txt
* File: D:\C_Assignment_Solutions\Assignment_4/Q1_File_Directory_List.c
* File: D:\C_Assignment_Solutions\Assignment_4/Q1_File_Directory_List.exe
* File: D:\C_Assignment_Solutions\Assignment_4/Q1_File_List.c
* File: D:\C_Assignment_Solutions\Assignment_4/Q1_File_List.exe
*/