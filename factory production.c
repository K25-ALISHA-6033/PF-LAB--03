#include <stdio.h>

int main() {
    int N, i;
    int totalItems = 0;

    printf("Enter number of boxes: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++) {
        totalItems = totalItems + i;   
    }

    printf("Total decorative items required = %d\n", totalItems);

    return 0;
}
