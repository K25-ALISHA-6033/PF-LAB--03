#include <stdio.h>
int main() {
    FILE *fptr;
    int score, val, i;
    int sum = 0;
    float average;
    fptr = fopen("survey.txt", "w");
    if (fptr == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }
    printf("Enter 5 survey scores (1-10):\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &score);
        fprintf(fptr, "%d\n", score);
    }
    fclose(fptr);
    fptr = fopen("survey.txt", "r");
    if (fptr == NULL) {
        printf("Error: Could not open file for reading.\n");
        return 1;
    }
    while (fscanf(fptr, "%d", &val) != EOF) {
        sum += val;
    }
    fclose(fptr);
    average = sum / 5.0;
    printf("\nSum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
