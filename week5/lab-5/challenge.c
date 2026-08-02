#include <stdio.h>
int main()
{
int balance = 0;
    for(int i = 1; i <= 4; i++)
    {
        printf("====== ATM MENU ======\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Choose and option:");
        scanf("%d", &i);
        if (i == 1)
        {
            
            printf("Your balance is: $%d\n", balance);
        }
        else if (i == 2)
        {
            int deposit;
            printf("Enter amount to deposit: ");
            scanf("%d", &deposit);
            balance += deposit;
            printf("You have deposited: $%d\n", deposit);
        }
        else if (i == 3)
        {
            int withdraw;
            printf("Enter amount to withdraw: ");
            scanf("%d", &withdraw);

            balance -= withdraw;
            printf("You have withdrawn: $%d\n", withdraw);
            if (balance < 0)
            {
                printf("Insufficient funds.\n");
                balance += withdraw;
            }
            
        }
        else if (i == 4)
        {
            printf("Thank you for using the ATM.\n");
            break;
        }
        else
        {
            printf("Please try again.\n");
        }
    }

return(0);
}