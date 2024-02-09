// Question 1:
// Define a struct in C for bank account information details
// struct members
// 	name,
// 	acountnumber,
// 	acounttype,  [saving/loan/ppf/nps]
// 	balance  [minimun balance = 1000]
// functions
// 	AcceptData()
// 	Deposit()
// 	Withdraw()
// 	Display()
// in main function test the functionality by using menu driven code

#include<stdio.h>
#include<string.h>
#include <stdlib.h>
struct members
{
    char name[20];
    int acountnumber;
    char accounttype[10];
    float balance;
   
};

void AcceptData(struct members *m)
{
    printf("Enter account holder name :");
    fgets(m->name, sizeof(m->name), stdin);
    
    printf("Enter account number :");
    scanf("%d",&m->acountnumber);

    printf("Enter account type :");
    scanf("%s",m->accounttype);

    printf("Enter account balance :");
    scanf("%f",&m->balance);

    if (m->balance < 1000) {
        printf("Minimum balance requirement not met. Setting balance to 1000.\n");
        m->balance = 1000;
    }
}

void Deposit(struct members *m) {
    float balance;
    printf("Enter the amount to deposit: ");
    scanf("%f", &balance);
    m->balance += balance;
    printf("Deposit successful. Updated balance: %.2f\n", m->balance);
}

void Withdraw(struct members *m) {
    float balance;
    printf("Enter the amount to withdraw: ");
    scanf("%f", &balance);

    // Add a check for minimum balance
    if (m->balance - balance < 1000) {
        printf("Withdrawal not allowed. Minimum balance requirement not met.\n");
    } else {
        m->balance -= balance;
        printf("Withdrawal successful. Updated balance: %.2f\n", m->balance);
    }
}

void Display(struct members *m) {
    printf("Account Holder's Name: %s", m->name);
    printf("Account Number: %d\n", m->acountnumber);
    printf("Account Type: %s\n", m->accounttype);
    printf("Account Balance: %.2f\n", m->balance);
}





int main(void)
{
    struct members m;
     int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Accept Data\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

         switch (choice) {
            case 1:
                AcceptData(&m);
                break;

            case 2:
                Deposit(&m);
                break;

            case 3:
                Withdraw(&m);
                break;

            case 4:
                Display(&m);
                break;

            case 5:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 5);

    
    return 0;
}