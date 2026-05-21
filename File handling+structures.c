#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    FILE *fptr;
    struct Student s;
    int n, i;

    // File open to write
    fptr = fopen("Anusha_Students.txt", "w");

    if(fptr == NULL) {
        printf("Error! File create avvaledu\n");
        exit(1);
    }

    printf("Entha mandi students data enter cheyyali? ");
    scanf("%d", &n);

    // Data teesukoni file lo raayadam
    for(i = 0; i < n; i++) {
        printf("\nStudent %d Details:\n", i+1);
        printf("Roll No: ");
        scanf("%d", &s.roll);
        printf("Name: ");
        scanf("%s", s.name);
        printf("Marks: ");
        scanf("%f", &s.marks);

        fprintf(fptr, "%d %s %.2f\n", s.roll, s.name, s.marks);
    }

    fclose(fptr);
    printf("\n✅ Success! Anusha_Students.txt file lo save ayindi\n");

    // File nunchi chadavadi malli print cheyadam
    fptr = fopen("Anusha_Students.txt", "r");
    printf("\n--- File lo unna Students Data ---\n");
    while(fscanf(fptr, "%d %s %f", &s.roll, s.name, &s.marks)!= EOF) {
        printf("Roll: %d | Name: %s | Marks: %.2f\n", s.roll, s.name, s.marks);
    }
    fclose(fptr);

    return 0;
}
