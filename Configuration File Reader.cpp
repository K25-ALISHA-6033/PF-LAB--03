#include <stdio.h>
int main() {
    FILE *fptr;
    fptr = fopen("config.txt", "r");
    if (fptr == NULL) {
        printf("Config file not found. Creating default config...\n");
        fptr = fopen("config.txt", "w");

        if (fptr == NULL) {
            printf("Error: Could not create config file.\n");
            return 1;
        }
        fprintf(fptr, "max_users=50\n");
        fprintf(fptr, "timeout=30\n");
        fprintf(fptr, "theme=light\n");
        fclose(fptr);
        printf("Default config.txt created successfully.\n");
    } 
    else {
        printf("Config file found. Reading contents:\n\n");

        char line[100];
        while (fgets(line, sizeof(line), fptr) != NULL) {
            printf("%s", line);
        }

        fclose(fptr);
    }
    return 0;
}
