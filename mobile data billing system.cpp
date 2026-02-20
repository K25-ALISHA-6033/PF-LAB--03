#include<stdio.h>
int main(){
	float data , bill;
	char type;
	printf("enter data usage (GB):");
	scanf("%f",&data);
	printf("costumer type (p=prepaid/o=postpaid):");
	scanf("%%c",&type);
	if (data<=2)
	bill=data*50;
	else if(data<=10){
		if(type=='p'||type=='o')
		bill=data*40;
		else
		bill=data*35;
	}
	else
	bill= data*25;
	printf("totalbill=Rs%2f,bill");
	
	return 0;
}
