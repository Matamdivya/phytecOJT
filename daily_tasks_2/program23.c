#include <stdio.h>
int main() {
    int pin = 1234, enteredpin, choice, newpin;
    float balance = 5000, amount;

    printf("Enter pin number: ");
    scanf("%d", &enteredpin);

    if (enteredpin != pin) {
        printf("INVALID PIN, TRY AGAIN\n");
        return 0; // stop program if wrong pin
    }

    do {
        printf("\n-------WELCOME TO SBI---------\n");
        printf("1. BALANCE ENQUIRY\n");
        printf("2. DEPOSIT\n");
        printf("3. WITHDRAWAL\n");
        printf("4. CHANGE PIN\n");
        printf("5. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your current balance is: %.2f\n", balance);
                break;

            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);
                balance = balance + amount;
                printf("Deposit successful.\n");
                break;

            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);
                if (amount <= balance) {
                    balance = balance - amount;
                    printf("Withdrawal successful.\n");
                } else {
                    printf("INSUFFICIENT FUNDS.\n");
                }
                break;

            case 4:
                printf("Enter new PIN: ");
                scanf("%d", &newpin);
                pin = newpin; // update pin
                printf("PIN changed successfully.\n");
                break;

            case 5:
                printf("Thank you for using ATM.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 5);

    return 0;}
