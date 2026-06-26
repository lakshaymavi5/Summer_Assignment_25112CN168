#include <stdio.h>

int main() {
    int pin = 1234;
    int entered_pin;
    int choice;
    float balance = 5000.0; 
    float amount;
    int status = 1; 

    printf("=== WELCOME TO THE ATM INTERFACE ===\n");
    
    while (1) {
        printf("\nPlease enter your 4-digit PIN: ");
        scanf("%d", &entered_pin);
        
        if (entered_pin == pin) {
            printf("PIN verified successfully!\n");
            break;
        } else {
            printf("Invalid PIN! Please try again.\n");
        }
    }

    while (status == 1) {
        printf("\n---------- ATM MENU ----------\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Cash\n");
        printf("3. Deposit Cash\n");
        printf("4. Exit\n");
        printf("------------------------------\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nYour current balance is: $%.2f\n", balance);
                break;

            case 2:
                printf("\nEnter amount to withdraw: $");
                scanf("%f", &amount);
                
                if (amount > balance) {
                    printf("Transaction Failed! Insufficient balance.\n");
                } else if (amount <= 0) {
                    printf("Transaction Failed! Enter a valid amount.\n");
                } else {
                    balance -= amount; 
                    printf("Please collect your cash.\n");
                    printf("Updated balance: $%.2f\n", balance);
                }
                break;

            case 3:
                printf("\nEnter amount to deposit: $");
                scanf("%f", &amount);
                
                if (amount <= 0) {
                    printf("Transaction Failed! Enter a valid amount.\n");
                } else {
                    balance += amount; 
                    printf("Amount deposited successfully!\n");
                    printf("Updated balance: $%.2f\n", balance);
                }
                break;

            case 4:
                printf("\nThank you for using our ATM. Goodbye!\n");
                status = 0;
                break;

            default:
                printf("\nInvalid option selected! Please pick a number from 1 to 4.\n");
        }
    }

    return 0;
}
