#include <stdio.h>
#include <stdlib.h>
int main() {
    int *contacts;
    int i;
    contacts = (int *)malloc(3 * sizeof(int));
    if (contacts == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter 3 contact IDs:\n");
    for (i = 0; i < 3; i++) {
        scanf("%d", &contacts[i]);
    }
    printf("\nInitial Contact List:\n");
    for (i = 0; i < 3; i++) {
        printf("%d ", contacts[i]);
    }
    int *temp;
    temp = (int *)realloc(contacts, 5 * sizeof(int));
    if (temp == NULL) {
        printf("\nReallocation failed!\n");
        free(contacts); 
        return 1;
    }
    contacts = temp; 
    printf("\nEnter 2 more contact IDs:\n");
    for (i = 3; i < 5; i++) {
        scanf("%d", &contacts[i]);
    }
    printf("\nUpdated Contact List:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", contacts[i]);
    }
    free(contacts);
    contacts = NULL; 

    return 0;
}
