#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    int i;
    for (i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    FILE *evenFile, *oddFile, *primeFile;
    int start, end;

    printf("Enter the range (start end): ");
    scanf("%d %d", &start, &end);

    evenFile = fopen("even.txt", "w");
    oddFile = fopen("odd.txt", "w");
    primeFile = fopen("prime.txt", "w");

    if (evenFile == NULL || oddFile == NULL || primeFile == NULL) {
        printf("Error opening files for writing.\n");
        return 1;
    }
	int i;
    for (i = start; i <= end; i++) {
        if (i % 2 == 0) {
            fprintf(evenFile, "%d\n", i);
        } else {
            fprintf(oddFile, "%d\n", i);
        }

        if (isPrime(i)) {
            fprintf(primeFile, "%d\n", i);
        }
    }

    fclose(evenFile);
    fclose(oddFile);
    fclose(primeFile);

    printf("Numbers written to files successfully.\n");

    return 0;
}

