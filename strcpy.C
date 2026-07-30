#include <stdio.h>
#include <string.h> // strcpy kosam ee header kavali

int main() {
    char source[100], destination[100];

    printf("Enter source string: ");
    fgets(source, sizeof(source), stdin); // spaces tho kuda teeskuntundi

    // new line remove cheyadam
    source[strcspn(source, "\n")] = 0;

    // STRING COPY
    strcpy(destination, source);

    printf("\n========== RESULT ==========");
    printf("\nSource String: %s", source);
    printf("\nCopied String: %s", destination);
    printf("\n============================");

    return 0;
}
