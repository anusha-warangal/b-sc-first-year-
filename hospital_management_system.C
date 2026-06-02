#include <stdio.h>

struct Patient {
    int id;
    char name[50];
    int age;
};

void displayPatient(struct Patient p) {
    printf("\nPatient ID: %d", p.id);
    printf("\nName: %s", p.name);
    printf("\nAge: %d\n", p.age);
}

int main() {
    struct Patient patients[3];

    printf("Enter details of 3 patients:\n");

    for (int i = 0; i < 3; i++) {
        printf("\nPatient %d\n", i + 1);

        printf("Enter Patient ID: ");
        scanf("%d", &patients[i].id);

        printf("Enter Name: ");
        scanf("%s", patients[i].name);

        printf("Enter Age: ");
        scanf("%d", &patients[i].age);
    }

    printf("\n===== PATIENT RECORDS =====\n");

    for (int i = 0; i < 3; i++) {
        displayPatient(patients[i]);
    }

    return 0;
}
