#include <stdio.h>
#include <string.h>

int findStringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char a[100];
    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);
    if (a[strlen(a) - 1] == '\n') {
        a[strlen(a) - 1] = '\0';
    }
    int length = findStringLength(a);
    printf("Length of the string: %d\n", length);
    return 0;
}

