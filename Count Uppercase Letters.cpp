#include <stdio.h>

void countChars(char *str, int *upper, int *digits) {
   
    if (*str == '\0')
        return;

    
    if (*str >= 'A' && *str <= 'Z')
        (*upper)++;

    
    if (*str >= '0' && *str <= '9')
        (*digits)++;

    countChars(str + 1, upper, digits);
}

int main() {
    char password[100];
    int upper = 0, digits = 0;

    printf("Enter password: ");
    scanf("%s", password);

    countChars(password, &upper, &digits);

    printf("Uppercase letters = %d\n", upper);
    printf("Digits = %d\n", digits);

    return 0;
}
