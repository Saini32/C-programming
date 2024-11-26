#include <stdio.h>

int main() {
    // Create a pointer to a FILE structure
    FILE *filePointer;

    // Open a file for writing (if it doesn't exist, it will be created)
    filePointer = fopen("example.txt", "w");

    // Check if the file was opened successfully
    if (filePointer == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    // Write data to the file
    fprintf(filePointer, "Hello, File Handling!\n");
    fprintf(filePointer, "This is a simple example.\n");

    // Close the file
    fclose(filePointer);

    // Open the file for reading
    filePointer = fopen("example.txt", "r");

    // Check if the file was opened successfully
    if (filePointer == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    // Read and display data from the file
    char line[100];
    while (fgets(line, sizeof(line), filePointer) != NULL) {
        printf("%s", line);
    }

    // Close the file
    fclose(filePointer);

    return 0;
}
