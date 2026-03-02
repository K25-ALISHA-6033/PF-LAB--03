#include <stdio.h>

int main() {
    int score;
    int distinction = 0, pass = 0, fail = 0;

    printf("Enter student scores (0-100).\n");
    printf("Enter -1 to stop.\n");

    printf("Enter score: ");
    scanf("%d", &score);

    while (score != -1) {

        if (score >= 75 && score <= 100) {
            distinction++;
        }
        else if (score >= 50 && score <= 74) {
            pass++;
        }
        else if (score >= 0 && score < 50) {
            fail++;
        }
        else {
            printf("Invalid score! Please enter between 0 and 100.\n");
        }

        printf("Enter score: ");
        scanf("%d", &score);
    }

    printf("\n--- Result Summary ---\n");
    printf("Distinction (>=75): %d\n", distinction);
    printf("Pass (50-74): %d\n", pass);
    printf("Fail (<50): %d\n", fail);

    return 0;
}
