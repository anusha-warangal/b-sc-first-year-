#include <stdio.h>

int main() {
    int books[5] = {101, 102, 103, 104, 105};
    int choice, bookId, found = 0;

    while (1) {
        printf("\n===== LIBRARY MENU =====\n");
        printf("1. View Books\n");
        printf("2. Search Book\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nAvailable Books:\n");
                for (int i = 0; i < 5; i++) {
                    printf("Book ID: %d\n", books[i]);
                }
                break;

            case 2:
                printf("Enter Book ID to search: ");
                scanf("%d", &bookId);

                found = 0;
                for (int i = 0; i < 5; i++) {
                    if (books[i] == bookId) {
                        found = 1;
                        break;
                    }
                }

                if (found)
                    printf("Book Found!\n");
                else
                    printf("Book Not Found!\n");

                break;

            case 3:
                printf("Exiting Library System...\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}
