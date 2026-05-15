#include <stdio.h>

int main() {
    int arr[5], i, sum = 0;

    printf("Enter 5 numbers: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]); // store in array
        sum = sum + arr[i]; // add to sum
    }

    printf("Sum = %d\n", sum);
    return 0;
}
