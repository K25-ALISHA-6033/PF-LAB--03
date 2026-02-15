#include<stdio.h>
int main(){
	float amount , discount , totalamount;
	
	printf("enter purchase amount\n");
	scanf("%f",&amount);
	
	if (amount>=5000){
		discount = amount * 0.20;
	} 
	else if(amount>=3000){
		discount = amount * 0.10;
	}
	else{
		discount = 0;
	}
	totalamount = amount - discount;
	
	  printf("Discount: %.2f\n", discount);
    printf("Amount to Pay: %.2f\n", totalamount);
    
	return 0;
}

