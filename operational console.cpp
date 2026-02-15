#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float a, b;
    int x, y;

    printf("=== Math Operations Console ===\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square of a number\n");
    printf("6. Cube of a number\n");
    printf("7. Square Root of a number\n");
    printf("8. Power (x^y)\n");
    printf("9. Absolute Value\n");
    printf("10. Modulus (Remainder)\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) {

        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Addition = %.2f", a + b);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Subtraction = %.2f", a - b);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Multiplication = %.2f", a * b);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            if (b != 0)
                printf("Division = %.2f", a / b);
            else
                printf("Error: Division by zero is not allowed!");
            break;

        case 5:
            printf("Enter a number: ");
            scanf("%f", &a);
            printf("Square = %.2f", a * a);
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%f", &a);
            printf("Cube = %.2f", a * a * a);
            break;

        case 7:
            printf("Enter a number: ");
            scanf("%f", &a);
            if (a >= 0)
                printf("Square Root = %.2f", sqrt(a));
            else
                printf("Error: Square root of negative number!");
            break;

        case 8:
            printf("Enter base and exponent: ");
            scanf("%f %f", &a, &b);
            printf("Power = %.2f", pow(a, b));
            break;

        case 9:
            printf("Enter a number: ");
            scanf("%f", &a);
            printf("Absolute Value = %.2f", fabs(a));
            break;

        case 10:
            printf("Enter two integers: ");
            scanf("%d %d", &x, &y);
            if (y != 0)
                printf("Modulus = %d", x % y);
            else
                printf("Error: Modulus by zero is not allowed!");
            break;

        default:
            printf("Invalid choice! Please select between 1 and 10.");
    }

    return 0;
}

