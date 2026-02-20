#include <stdio.h>

int main() {
int mainType, subType;
float weight, rate, totalFee;


printf("Select Main Luggage Type:\n");
printf("1. Handbag\n");
printf("2. Checked Bag\n");
printf("3. Sports Equipment\n");
printf("Enter choice (1-3): ");
scanf("%d", &mainType);

printf("Enter luggage weight (in kg): ");
scanf("%f", &weight);

switch(mainType) {

case 1: 
printf("Select Handbag Type:\n");
printf("1. Small\n");
printf("2. Large\n");
printf("Enter choice (1-2): ");
scanf("%d", &subType);

switch(subType) {
case 1:
rate = 100;
break;
case 2:
rate = 200;
break;
default:
printf("Invalid Handbag Type!\n");
return 1;
}
break;

case 2: 
printf("Select Checked Bag Type:\n");
printf("1. Domestic\n");
printf("2. International\n");
printf("Enter choice (1-2): ");
scanf("%d", &subType);

switch(subType) {
case 1:
rate = 300;
break;
case 2:
rate = 500;
break;
default:
printf("Invalid Checked Bag Type!\n");
return 1;
}
break;

case 3: 
rate = 1000;
break;

default:
printf("Invalid Main Luggage Type!\n");
return 1;
}

totalFee = weight * rate;


printf("\nLuggage Weight: %.2f kg", weight);
printf("\nRate per kg: Rs. %.2f", rate);
printf("\nTotal Luggage Fee: Rs. %.2f\n", totalFee);

return 0;
}
