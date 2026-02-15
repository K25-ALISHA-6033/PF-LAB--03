#include<stdio.h>
int main(){
	int balance;
	printf("enter account balance");
	scanf("%d", &balance);
	if(balance>0){
		printf("positive balance");
	}
	else if(balance,0){
		printf("overdawn");
	}
	else{
		printf("zero balance");
	}
	return 0;
}

