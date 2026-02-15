#include<stdio.h>
int main(){
	int data;
	printf("enter total data used in GB");
	scanf("%d", &data);
	if(data<=50){
		printf("basic user");
	}
	else if(data>50&&data<=50){
		printf("standard user");
	}
	else{
		printf("heavy user");
	}
	return 0;
}

