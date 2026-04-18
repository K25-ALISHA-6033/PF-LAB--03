#include <stdio.h>
#include <string.h>
int main() {
    char storedPassword[] = "Secure123";
    char input[100];
    int attempts = 0;
    while (attempts < 3) {
        printf("Enter password: ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0';
        if (strlen(input) == 0) {
            printf("Password cannot be empty.\n\n");
            continue;
        }
        attempts++;
        int result = strcmp(input, storedPassword);
        if (result == 0) {
            printf("Access Granted!\n");
            return 0;
        } else {
            printf("Incorrect password.\n");
            if (result < 0) {
                printf("Your input is alphabetically BEFORE the stored password.\n");
            } else {
                printf("Your input is alphabetically AFTER the stored password.\n");
            }
            if (attempts == 2) {
                if (strncmp(input, storedPassword, 3) == 0) {
                    printf("Hint: First 3 characters match.\n");
                } else {
                    printf("Hint: First 3 characters do NOT match.\n");
                }
            }

            printf("Attempts left: %d\n\n", 3 - attempts);
        }
    }
    printf("Too many failed attempts. User locked out.\n");

    return 0;
}
