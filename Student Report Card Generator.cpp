#include <stdio.h>
#include <string.h>
int main() {
    FILE *fptr;
    char name[50];
    int s1, s2, s3;
    float avg;
    char status[10];
    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    printf("Enter 3 subject scores:\n");
    scanf("%d %d %d", &s1, &s2, &s3);
    avg = (s1 + s2 + s3) / 3.0;
    if (avg >= 50)
        strcpy(status, "Pass");
    else
        strcpy(status, "Fail");
    fptr = fopen("report.txt", "w+");
    if (fptr == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }
    fprintf(fptr, "----- Report Card -----\n");
    fprintf(fptr, "Name: %s\n", name);
    fprintf(fptr, "Scores: %d, %d, %d\n", s1, s2, s3);
    fprintf(fptr, "Average: %.2f\n", avg);
    fprintf(fptr, "Status: %s\n", status);
    rewind(fptr);
    char line[100];
    printf("\nGenerated Report:\n\n");
    while (fgets(line, sizeof(line), fptr) != NULL) {
        printf("%s", line);
    }
    fclose(fptr);
    return 0;
}
