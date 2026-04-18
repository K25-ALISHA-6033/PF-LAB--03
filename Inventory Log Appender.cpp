#include <stdio.h>

int main() {
    FILE *fptr;
    char product[50];
    int quantity;
    fptr = fopen("inventory.txt", "a");
    if (fptr == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }
    printf("Enter product name: ");
    scanf("%s", product);
    printf("Enter quantity: ");
    scanf("%d", &quantity);
    fprintf(fptr, "%s %d\n", product, quantity);
    fclose(fptr);
    fptr = fopen("inventory.txt", "r");

    if (fptr == NULL) {
        printf("Error: Could not open file for reading.\n");
        return 1;
    }
    printf("\nInventory Records:\n");
    while (fscanf(fptr, "%s %d", product, &quantity) != EOF) {
        printf("Product: %s, Quantity: %d\n", product, quantity);
    }
    fclose(fptr);
    return 0;
}
