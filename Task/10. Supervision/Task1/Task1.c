#include <stdio.h>

int main() {
    FILE *file;
    char data[] = "Hi... My name is Kevin.\n";

    file = fopen("data.txt", "w");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    fprintf(file, "%s", data);

    fclose(file);

    printf("Data written to the file successfully.\n");

    return 0;
}

