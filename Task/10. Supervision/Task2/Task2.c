#include <stdio.h>

int main() {
    FILE *file;
    char ch;

    file = fopen("data.txt", "r");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    printf("File contents:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);

    return 0;
}

