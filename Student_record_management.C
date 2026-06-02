#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student s[3];

    printf("Enter details of 3 students:\n");

    for(int i = 0; i < 3; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].rollNo);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n--- Student Records ---\n");

    for(int i = 0; i < 3; i++) {
        printf("\nRoll No: %d", s[i].rollNo);
        printf("\nName: %s", s[i].name);
        printf("\nMarks: %.2f\n", s[i].marks);
    }

    return 0;
}
