#include <stdio.h>
#include <string.h>
struct Order {
    int orderID;
    char customerName[50];
    char productName[50];
    int quantity;
    float unitPrice;
    char status[20];
};
float computeTotal(struct Order o) {
    return o.quantity * o.unitPrice;
}
void filterByStatus(struct Order orders[], int n, char status[]) {
    printf("\n--- Orders with status: %s ---\n", status);
    for (int i = 0; i < n; i++) {
        if (strcmp(orders[i].status, status) == 0) {
            printf("Order ID: %d\n", orders[i].orderID);
            printf("Customer: %s\n", orders[i].customerName);
            printf("Product: %s\n", orders[i].productName);
            printf("Quantity: %d\n", orders[i].quantity);
            printf("Unit Price: %.2f\n", orders[i].unitPrice);
            printf("Total: %.2f\n\n", computeTotal(orders[i]));
        }
    }
}
int main() {
    struct Order orders[4];
    for (int i = 0; i < 4; i++) {
        printf("\nEnter details for Order %d\n", i + 1);
        printf("Order ID: ");
        scanf("%d", &orders[i].orderID);
        getchar();
        printf("Customer Name: ");
        fgets(orders[i].customerName, 50, stdin);
        orders[i].customerName[strcspn(orders[i].customerName, "\n")] = '\0';
        printf("Product Name: ");
        fgets(orders[i].productName, 50, stdin);
        orders[i].productName[strcspn(orders[i].productName, "\n")] = '\0';
        printf("Quantity: ");
        scanf("%d", &orders[i].quantity);
        printf("Unit Price: ");
        scanf("%f", &orders[i].unitPrice);

        getchar();
        printf("Status (Pending/Shipped/Delivered): ");
        fgets(orders[i].status, 20, stdin);
        orders[i].status[strcspn(orders[i].status, "\n")] = '\0';
    }
    printf("\n--- All Order Bills ---\n");
    for (int i = 0; i < 4; i++) {
        printf("Order ID: %d | Total Bill: %.2f\n",
               orders[i].orderID,
               computeTotal(orders[i]));
    }
    char status[20];
    printf("\nEnter status to filter: ");
    fgets(status, 20, stdin);
    status[strcspn(status, "\n")] = '\0';

    filterByStatus(orders, 4, status);

    return 0;
}
