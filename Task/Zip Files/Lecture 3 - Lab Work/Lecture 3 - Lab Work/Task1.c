#include <stdio.h>

int main() {
    int choice;
    int serviceChoice;

    printf("Welcome to the Telecom Call Service\n");

    do {
        printf("\nMenu:\n");
        printf("1. Make a call\n");
        printf("2. Check balance\n");
        printf("3. Activate a service\n");
        printf("4. Exit\n");

        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Making a call...\n");
                break;
            case 2:
                printf("Checking balance...\n");
                break;
            case 3:
                printf("\nService Activation Menu:\n");
                printf("1. Activate data plan\n");
                printf("2. Activate international roaming\n");
                printf("3. Back to main menu\n");
                printf("Enter your choice (1-3): ");
                scanf("%d", &serviceChoice);

                switch (serviceChoice) {
                    case 1:
                        printf("Activating data plan...\n");
                        break;
                    case 2:
                        printf("Activating international roaming...\n");
                        break;
                    case 3:
                        printf("Returning to the main menu...\n");
                        break;
                    default:
                        printf("Invalid choice. Please try again.\n");
                        break;
                }
                break;
            case 4:
                printf("Exiting the Telecom Call Service. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }

    } while (choice != 4);

    return 0;
}

