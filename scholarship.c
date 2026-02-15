#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;

    printf("Enter marks for 5 subjects (0-100):\n");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = (total / 500.0) * 100;

    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 85) {
        printf("Scholarship Status: Full Scholarship\n");
    }
    else if (percentage >= 70) {
        printf("Scholarship Status: Partial Scholarship\n");
    }
    else if (percentage >= 50) {
        printf("Scholarship Status: Eligible for Consideration\n");
    }
    else {
        printf("Scholarship Status: Not Eligible\n");
    }

    return 0;
}

