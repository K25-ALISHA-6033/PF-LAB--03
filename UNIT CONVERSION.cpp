#include <stdio.h>

float toMJ(float kwh){ return kwh * 3.6; }
float toBTU(float kwh){ return kwh * 3412.14; }
float toCal(float kwh){ return kwh * 859845; }

int main() {
    float kwh;
    scanf("%f",&kwh);

    printf("MJ: %.2f\n", toMJ(kwh)); 
    printf("BTU: %.2f\n", toBTU(kwh));
    printf("Calories: %.2f\n", toCal(kwh));

    return 0;
}
