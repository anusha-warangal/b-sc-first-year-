#include <stdio.h>

int main() {
    int marks[5] = {85, 90, 78, 92, 88};
    int sum = 0;

    for(int i = 0; i < 5; i++) {
        sum = sum + marks[i]; // add each mark
    }

    printf("Total marks = %d\n", sum);
    printf("Average = %d\n", sum/5);

    return 0;
}
