#include <stdio.h>
#include <string.h>

int main() {
    char email[100];
    char copy[100];
    char formatted[150];
    printf("Enter email address: ");
    fgets(email, sizeof(email), stdin);
    email[strcspn(email, "\n")] = '\0';
    strcpy(copy, email);
    char *atPtr = strchr(copy, '@');
    if (atPtr == NULL) {
        printf("Error: Invalid email (no '@' found).\n");
        return 0;
    }
    char *domain = atPtr + 1;
    strcpy(formatted, "Email: ");
    strcat(formatted, copy);

    printf("%s\n", formatted);
    printf("Domain: %s\n", domain);

    return 0;
}
