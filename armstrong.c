#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, result = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    original = num;
    
    while (original != 0) {
        remainder = original % 10;         // get last digit
        result += pow(remainder, 3);       // cube it and add
        original = original / 10;          // remove last digit
    }
    
    if (result == num)
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is NOT an Armstrong number\n", num);
        
    return 0;
}
