#include<stdio.h>
int main(){
float balance,withdraw;

printf("enter intial balance:");
scanf("%f",&balance);
while(balance>0){
	printf("enter withdraw amount:");
	scanf("%f",&withdraw);
	balance=balance-withdraw;
	printf("remaining balance:%2f\n", balance);
	
}
 printf("balance exhausted.\n");
 return 0;
}
