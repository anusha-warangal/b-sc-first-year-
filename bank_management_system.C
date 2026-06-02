#include <stdio.h>

float balance = 5000.0;

void checkBalance() {
    printf("\nCurrent Balance: Rs. %.2f\n", balance);
}

void depositMoney() {
    float amount;
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);

    balance += amount;
    printf("Rs. %.2f deposited successfully.\n", amount);
}

void withdrawMoney() {
    float amount;
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    if(amount > balance) {
        printf("Insufficient Balance!\n");
    } else {
        balance -= amount;
        printf("Rs. %.2f withdrawn successfully.\n", amount);
    }
}

int main() {
    int choice;

    do {
        printf("\n===== BANK MANAGEMENT SYSTEM =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                depositMoney();
                break;
            case 3:
                withdrawMoney();
                break;
            case 4:
                printf("Thank you for using the Bank System!\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}
