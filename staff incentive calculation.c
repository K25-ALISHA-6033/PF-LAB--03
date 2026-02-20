#include<stdio.h>
int main(){
	float salary , incentive;
	int service;
	printf("Enter salary");
	scanf("%f",&salary);
	
	printf("Enter years of service");
	scanf("%d",&service);
	
	incentive=(service>15) ? (0.35*salary):
	          (service>7)  ? (0.20*salary):
	                         (0.05*salary);
	                    
	printf("incentive Amount =Rs.%2f\n",incentive);
	
	return 0;                    
}
