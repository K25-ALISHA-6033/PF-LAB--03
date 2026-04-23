#include <stdio.h>
#include <string.h>
struct Department {
    char deptCode[10];
    char deptName[50];
};
struct Course {
    char courseCode[10];
    char courseName[60];
    int creditHours;
    struct Department dept;
};
void displayCourses(struct Course c[], int n) {
    printf("\n--- Course Catalog ---\n");

    for (int i = 0; i < n; i++) {
        printf("\nCourse %d:\n", i + 1);
        printf("Course Code: %s\n", c[i].courseCode);
        printf("Course Name: %s\n", c[i].courseName);
        printf("Credit Hours: %d\n", c[i].creditHours);
        printf("Department Code: %s\n", c[i].dept.deptCode);
        printf("Department Name: %s\n", c[i].dept.deptName);
    }
}
void searchByDept(struct Course c[], int n, char code[]) {
    int found = 0;
    printf("\nCourses in Department %s:\n", code);
    for (int i = 0; i < n; i++) {
        if (strcmp(c[i].dept.deptCode, code) == 0) {
            printf("\nCourse Code: %s\n", c[i].courseCode);
            printf("Course Name: %s\n", c[i].courseName);
            printf("Credit Hours: %d\n", c[i].creditHours);
            found = 1;
        }
    }

    if (!found) {
        printf("No courses found for this department\n");
    }
}
int main() {
    struct Course c[3];
    for (int i = 0; i < 3; i++) {
        printf("\nEnter details for Course %d\n", i + 1);

        printf("Course Code: ");
        scanf("%s", c[i].courseCode);
        printf("Course Name: ");
        getchar();
        fgets(c[i].courseName, 60, stdin);
        c[i].courseName[strcspn(c[i].courseName, "\n")] = '\0';
        printf("Credit Hours: ");
        scanf("%d", &c[i].creditHours);
        printf("Department Code: ");
        scanf("%s", c[i].dept.deptCode);
        printf("Department Name: ");
        getchar();
        fgets(c[i].dept.deptName, 50, stdin);
        c[i].dept.deptName[strcspn(c[i].dept.deptName, "\n")] = '\0';
    }
    displayCourses(c, 3);
    char code[10];
    printf("\nEnter Department Code to search: ");
    scanf("%s", code);
    searchByDept(c, 3, code);
    return 0;
}
