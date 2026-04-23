#include <stdio.h>
#include <string.h>
struct Patient {
    char name[50];
    int age;
    char bloodType[5];
    int patientID;
    char diagnosis[100];
};
void displayAll(struct Patient p[], int n) {
    printf("\n--- Patient Records ---\n");
    printf("ID\tName\t\tAge\tBlood\tDiagnosis\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t\t%d\t%s\t%s\n",
               p[i].patientID,
               p[i].name,
               p[i].age,
               p[i].bloodType,
               p[i].diagnosis);
    }
}
void searchByID(struct Patient p[], int n, int id) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (p[i].patientID == id) {
            printf("\nPatient Found:\n");
            printf("ID: %d\n", p[i].patientID);
            printf("Name: %s\n", p[i].name);
            printf("Age: %d\n", p[i].age);
            printf("Blood Type: %s\n", p[i].bloodType);
            printf("Diagnosis: %s\n", p[i].diagnosis);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Patient not found\n");
    }
}
int main() {
    struct Patient p[5];
    for (int i = 0; i < 5; i++) {
        printf("\nEnter details for patient %d\n", i + 1);
        printf("Name: ");
        getchar(); // clear buffer
        fgets(p[i].name, 50, stdin);
        p[i].name[strcspn(p[i].name, "\n")] = '\0';
        printf("Age: ");
        scanf("%d", &p[i].age);
        printf("Blood Type: ");
        scanf("%s", p[i].bloodType);
        printf("Patient ID: ");
        scanf("%d", &p[i].patientID);
        printf("Diagnosis: ");
        getchar(); // clear buffer
        fgets(p[i].diagnosis, 100, stdin);
        p[i].diagnosis[strcspn(p[i].diagnosis, "\n")] = '\0';
    }
    displayAll(p, 5);
    int id;
    printf("\nEnter Patient ID to search: ");
    scanf("%d", &id);
    searchByID(p, 5, id);
    return 0;
}
