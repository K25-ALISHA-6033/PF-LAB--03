#include <stdio.h>
#include <math.h>

int main() {
    int choice, age;
    float weight, height, bmi, bmr, idealWeight;
    float maxHR, lowerZone, upperZone;

    printf("===== Advanced Health Calculator =====\n");
    printf("1. BMI Calculation\n");
    printf("2. BMR Calculation\n");
    printf("3. Ideal Weight (Devine Formula)\n");
    printf("4. Heart Rate Zone\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {

        case 1:   // BMI
            printf("Enter weight (kg): ");
            scanf("%f", &weight);
            printf("Enter height (meters): ");
            scanf("%f", &height);

            if (weight > 0 && height > 0) {
                bmi = weight / pow(height, 2);   
                printf("BMI = %.2f\n", bmi);
            } else {
                printf("Error: Weight and height must be positive.\n");
            }
            break;

        case 2:   
            printf("Enter weight (kg): ");
            scanf("%f", &weight);
            printf("Enter height (cm): ");
            scanf("%f", &height);
            printf("Enter age (years): ");
            scanf("%d", &age);

            if (weight > 0 && height > 0) {
                if (age > 0) {
                    bmr = 10 * weight + 6.25 * height - 5 * age + 5;
                    printf("BMR = %.2f calories/day\n", bmr);
                } else {
                    printf("Error: Age must be positive.\n");
                }
            } else {
                printf("Error: Weight and height must be positive.\n");
            }
            break;

        case 3:   
            printf("Enter height (cm): ");
            scanf("%f", &height);

            if (height > 0) {
                idealWeight = 50 + 0.9 * fabs(height - 152); 
                printf("Ideal Weight = %.2f kg\n", idealWeight);
            } else {
                printf("Error: Height must be positive.\n");
            }
            break;

        case 4:   
            printf("Enter age: ");
            scanf("%d", &age);

            if (age > 0) {
                maxHR = 220 - age;
                lowerZone = 0.50 * maxHR;
                upperZone = 0.85 * maxHR;

                printf("Maximum Heart Rate = %.2f bpm\n", maxHR);
                printf("Target Heart Rate Zone: %.2f - %.2f bpm\n",
                        lowerZone, upperZone);
            } else {
                printf("Error: Age must be positive.\n");
            }
            break;

        default:
            printf("Invalid choice selected.\n");
    }

    return 0;
}
