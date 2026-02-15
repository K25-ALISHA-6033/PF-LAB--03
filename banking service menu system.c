#include <stdio.h>

int main() {
int choice;

printf("ATM Menu \n");
printf("1. Balance Inquiry\n");
printf("2. Withdraw Money\n");
printf("3. Deposit Money\n");
printf("4. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);

switch(choice) {
case 1:
printf("You selected Balance Inquiry.");
break;

case 2:
printf("You selected Withdraw Money.");
break;

case 3:
printf("You selected Deposit Money.");
break;

case 4:
printf("Exiting... Thank you for using our ATM.");
break;

default:
printf("Invalid choice. Please select a valid option.");
}

return 0;
}

