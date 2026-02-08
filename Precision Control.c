#include<stdio.h>

int main(){
	double num;
	
	printf("enter a double value:");
    scanf("%lf", &num);

    printf("Default precision: %lf\n", num);
    printf("2 decimal places: %.2lf\n", num);
    printf("5 decimal places: %.5lf\n", num);

    return 0;
}

