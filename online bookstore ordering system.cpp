#include <stdio.h>

int main() {
int category, subCategory, quantity;
float price = 0, totalBill = 0;
char bookName[30];

printf("Select Book Category:\n");
printf("1. Fiction\n");
printf("2. Non-Fiction\n");
printf("Enter choice (1-2): ");
scanf("%d", &category);

switch(category) {

case 1:
printf("\nFiction Books:\n");
printf("1. Novel (Rs. 600)\n");
printf("2. Comic (Rs. 300)\n");
printf("Enter choice (1-2): ");
scanf("%d", &subCategory);

switch(subCategory) {
case 1:
price = 600;
printf("You selected: Novel\n");
break;
case 2:
price = 300;
printf("You selected: Comic\n");
break;
default:
printf("Invalid Fiction choice!\n");
return 1;
}
break;

case 2:
printf("\nNon-Fiction Books:\n");
printf("1. Biography (Rs. 800)\n");
printf("2. Self-Help (Rs. 500)\n");
printf("Enter choice (1-2): ");
scanf("%d", &subCategory);

switch(subCategory) {
case 1:
price = 800;
printf("You selected: Biography\n");
break;
case 2:
price = 500;
printf("You selected: Self-Help\n");
break;
default:
printf("Invalid Non-Fiction choice!\n");
return 1;
}
break;

default:
printf("Invalid Category!\n");
return 1;
}


printf("Enter quantity: ");
scanf("%d", &quantity);


totalBill = price * quantity;


printf("\nPrice per book: Rs. %.2f", price);
printf("\nQuantity: %d", quantity);
printf("\nTotal Bill: Rs. %.2f\n", totalBill);

return 0;
}

