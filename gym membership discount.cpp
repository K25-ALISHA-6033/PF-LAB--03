#include<stdio.h>
int main(){
	int fitness, age;
	printf("enter fitness score");
	scanf("%d",&fitness);
	printf("enter age");
	scanf("%d", &age);
	if(fitness>=85){
		if(age<25)
		printf("40%%discount");
		else
		printf("25%%discount");
	}
	else{
		if(fitness>=70&&age<30)
		printf("15%%discount");
		else
		printf("no discount");
	}
	return 0;
}
