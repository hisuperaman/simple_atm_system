#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float balance = 0;

void mainMenu();
void checkBalance();
void deposit();
void withdraw();

void main()
{
    char ch, subCh;
    do
    {
        system("cls");
        mainMenu();
        ch = getch();
        switch(ch)
        {
            case '1':
                system("cls");
                checkBalance();
                printf("Press any key to go back to Main Menu\n");
                getch();
                break;
            case '2':
                system("cls");
                deposit();
                printf("Press any key to go back to Main Menu\n");
                getch();
                break;
            case '3':
                system("cls");
                withdraw();
                printf("Press any key to go back to Main Menu\n");
                getch();
                break;
            case '4':
                system("cls");
                printf("Thank you for using our ATM!\n");
                break;
            default:
                printf("");
        }
    }while(ch!='4');
}

void mainMenu()
{
    printf("----Welcome To ATM Banking----\n");
    printf("Please choose one of following options\n");
    printf("1: Check Balance\n");
    printf("2: Deposit\n");
    printf("3: Withdraw\n");
    printf("4: Exit\n");
}

void checkBalance()
{
    printf("Your Account Balance is\n");
    printf("Rs %.2f\n", balance);
}

void deposit()
{
    float amt;
    printf("Enter the amount you want to deposit\n");
    scanf("%f", &amt);
    balance += amt;
    printf("Rs %.2f deposited\n", amt);
    printf("Your current account balance is: Rs %.2f\n", balance);
}

void withdraw()
{
    float amt;
    printf("Enter the amount you want to withdraw\n");
    scanf("%f", &amt);
    if(amt<=balance)
    {
        balance -= amt;
        printf("Rs %.2f withdrawed\n", amt);
        printf("Your current balance is: Rs %.2f\n", balance);
    }
    else
    {
        printf("Not enough money to withdraw\n");
        printf("Your account balance is: Rs %.2f\n", balance);
    }
}
