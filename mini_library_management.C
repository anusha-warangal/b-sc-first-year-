#include <stdio.h>

struct Book {
    int id;
    char name[50];
};

int main() {
    struct Book books[5];
    int choice, n = 0, searchId, found;

    do {
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Count Books\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if(n < 5) {
                    printf("Enter Book ID: ");
                    scanf("%d", &books[n].id);

                    printf("Enter Book Name: ");
                    scanf("%s", books[n].name);

                    n++;
                    printf("Book Added Successfully!\n");
                } else {
                    printf("Library is Full!\n");
                }
                break;

            case 2:
                if(n == 0) {
                    printf("No Books Available!\n");
                } else {
                    printf("\n--- Book List ---\n");
                    for(int i = 0; i < n; i++) {
                        printf("ID: %d, Name: %s\n",
                               books[i].id,
                               books[i].name);
                    }
                }
                break;

            case 3:
                printf("Enter Book ID to Search: ");
                scanf("%d", &searchId);

                found = 0;

                for(int i = 0; i < n; i++) {
                    if(books[i].id == searchId) {
                        printf("Book Found: %s\n",
                               books[i].name);
                        found = 1;
                        break;
                    }
                }

                if(!found)
                    printf("Book Not Found!\n");

                break;

            case 4:
                printf("Total Books: %d\n", n);
                break;

            case 5:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}
