#include <stdio.h>

struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Product p[3];

    printf("Enter details of 3 products:\n");

    for(int i = 0; i < 3; i++) {
        printf("\nProduct %d\n", i + 1);

        printf("Enter Product ID: ");
        scanf("%d", &p[i].id);

        printf("Enter Product Name: ");
        scanf("%s", p[i].name);

        printf("Enter Quantity: ");
        scanf("%d", &p[i].quantity);

        printf("Enter Price: ");
        scanf("%f", &p[i].price);
    }

    printf("\n===== INVENTORY DETAILS =====\n");

    for(int i = 0; i < 3; i++) {
        printf("\nProduct ID: %d\n", p[i].id);
        printf("Product Name: %s\n", p[i].name);
        printf("Quantity: %d\n", p[i].quantity);
        printf("Price: Rs. %.2f\n", p[i].price);
    }

    return 0;
}
