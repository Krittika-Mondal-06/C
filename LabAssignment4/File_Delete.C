#include <stdio.h>

int main() {
    char fileName[100];

    // Get the file name from the user
    printf("Enter the file name to delete: ");
    scanf("%s", fileName);

    // Delete the file
    if (remove(fileName) == 0) {
        printf("File deleted successfully.\n");
    } else {
        printf("Unable to delete the file. Please check if the file exists and you have the necessary permissions.\n");
    }

    return 0;
}

/* **Compilation**
* $gcc Q6_File_Delete.c -o Q6_File_Delete
* $./Q6_File_Delete
* Enter the file name to delete: Code_Party_Merge.txt
* File deleted successfully.
*/
