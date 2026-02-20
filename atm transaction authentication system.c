#include <stdio.h>

int main() {
    int enteredCard, enteredPIN;
    int validCard = 12345;
    int validPIN  = 6789;
    float balance = 25000;
    float amount;

    printf("Enter Card Number: ");
    scanf("%d", &enteredCard);

    if (enteredCard == validCard) {                 
        printf("Enter PIN: ");
        scanf("%d", &enteredPIN);

        if (enteredPIN == validPIN) {               
            printf("Enter Transaction Amount: ");
            scanf("%f", &amount);

            if (amount > 0 && amount <= balance) { 
                printf("Transaction Successful\n");
                printf("Remaining Balance = %.2f\n", balance - amount);
            }
            else {
                printf("Insufficient Funds\n");
            }
        }
        else {
            printf("Invalid PIN\n");
        }
    }
    else {
        printf("Invalid Card\n");
    }

    return 0;
}
