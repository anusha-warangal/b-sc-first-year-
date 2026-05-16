#include <stdio.h>

int main() {
    int n, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Bubble Sort Logic - Ascending
    for(i = 0; i < n-1; i++) { // Passes
        for(j = 0; j < n-i-1; j++) { // Comparisons
            if(arr[j] > arr[j+1]) { // Swap if wrong order
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("\nSorted array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nLowest: %d | Highest: %d\n", arr[0], arr[n-1]);

    return 0;
}
