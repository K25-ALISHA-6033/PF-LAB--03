#include <stdio.h>

float triageScore(int severity, int age, int vitals) {
    return (severity * 0.5) + (age * 0.3) + (vitals * 0.2);
}

int main() {
    int s, a, v;
    float score;

    scanf("%d %d %d", &s, &a, &v);

    score = triageScore(s, a, v);

    if(score > 7.0)
        printf("Immediate attention required");
    else if(score >= 4.0)
        printf("Moderate priority");
    else
        printf("Can wait");

    return 0;
}
