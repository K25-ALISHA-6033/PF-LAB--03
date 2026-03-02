#include <stdio.h>

int main() {
    float price, total = 0, discount = 0, finalAmount;
    int choice;

    do {
        printf("Enter product price: ");
        scanf("%f", &price);

        if (price > 0) {
            total = total + price;
        } else {
            printf("Invalid price! Please enter a positive value.\n");
        }

        printf("Add another product? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);

    } while (choice == 1);

    if (total > 5000) {
        discount = total * 0.05;
    }

    finalAmount = total - discount;

    printf("\n--- Bill Summary ---\n");
    printf("Total Amount = %.2f\n", total);
    printf("Discount = %.2f\n", discount);
    printf("Final Payable Amount = %.2f\n", finalAmount);

    return 0;
}
