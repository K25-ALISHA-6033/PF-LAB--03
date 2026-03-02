#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    do {
        printf("\n--- Simple Calculator ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 + num2;
            printf("Result = %.2f\n", result);
        }
        else if (choice == 2) {
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 - num2;
            printf("Result = %.2f\n", result);
        }
        else if (choice == 3) {
            printf("Exiting program...\n");
        }
        else {
            printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 3);

    return 0;
}
