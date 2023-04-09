#include <stdio.h>

int main()
{
    int option, balance = 5000, amount;

    printf("Welcome to My ATM\n");
    printf("1. Withdrawal\n");
    printf("2. Deposit\n");
    printf("3. Balance Enquiry\n");
    printf("4. Exit\n");

    while(1)
    {
        printf("\nEnter your choice: ");
        scanf("%d", &option);

        switch(option)
        {
            case 1: // Withdrawal
                printf("\nEnter amount to withdraw: ");
                scanf("%d", &amount);

                if(balance < amount)
                {
                    printf("\nInsufficient balance!\n");
                }
                else
                {
                    balance -= amount;
                    printf("\nTransaction successful!\n");
                    printf("Your new balance is %d\n", balance);
                }

                break;

            case 2: // Deposit
                printf("\nEnter amount to deposit: ");
                scanf("%d", &amount);

                balance += amount;
                printf("\nTransaction successful!\n");
                printf("Your new balance is %d\n", balance);

                break;

            case 3: // Balance Enquiry
                printf("\nYour balance is %d\n", balance);

                break;

            case 4: // Exit
                printf("\nThank you for using My ATM!\n");

                return 0;

            default:
                printf("\nInvalid choice!\n");

                break;
        }
    }

    return 0;
}
