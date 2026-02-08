#include <stdio.h>

int main() {
    int x;
    float y;
    char z;

    printf("Enter an integer: ");
    scanf("%d", &x);

    printf("Enter a float: ");
    scanf("%f", &y);

    printf("Enter a character: ");
    scanf(" %c", &z);  

    printf("\nYou entered:\n");
    printf("Integer: %d\n", x);
    printf("Float: %f\n", y);
    printf("Character: %c\n", z);

    return 0;
}
