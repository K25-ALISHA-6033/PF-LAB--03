#include<stdio.h>
int main(){
	int attendence;
	printf("enter practice attendence percentage");
	scanf("%f",&attendence);
	if (attendence >=75){
		printf("selected for tournament");
	}
	else{
		printf("not selected");
}
	return 0;
}

