#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char ch;

    sourceFile = fopen("data.txt", "r");

    if (sourceFile == NULL) {
        printf("Error opening the source file.\n");
        return 1;
    }

    destinationFile = fopen("destination.txt", "w");

    if (destinationFile == NULL) {
        printf("Error opening the destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    fclose(sourceFile);
    fclose(destinationFile);

    printf("Contents copied successfully.\n");

    return 0;
}

