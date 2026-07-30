#include <stdio.h>
#include <string.h> // strcat kosam ee header kavali

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; // new line remove

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;

    // STRING CONCATENATE
    strcat(str1, str2); // str2 ni str1 venaka kaluputhundi

    printf("\n========== RESULT ==========");
    printf("\nConcatenated String: %s", str1);
    printf("\n============================");

    return 0;
}
