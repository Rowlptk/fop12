// Account Basic Transactions
// check Balance, deposit, withdraw

#include<stdio.h>

void checkBalance();
void deposit(float amount);
void withdraw(float amount);
float userAmount();
void menu();

float mainBalance = 5000.45;

void main() {
  menu();
}

void menu() {
    int n;
    printf("Press :\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
    scanf("%d",&n);
    switch(n) {
        case 1:
            checkBalance();
            break;
        case 2:
            deposit(userAmount());
            break;
        case 3:
            withdraw(userAmount());
            break;
        case 4:
            exit(0);
        default:
            printf("\n");
            menu();

    }
}

float userAmount() {
    float amount;
    printf("Enter Amount : ");
    scanf("%f", &amount);
    return amount;
}

void withdraw(float amount) {
    mainBalance -= amount;
    printf("Deducted Amount : $%.2f\n", amount);
    checkBalance();
}

void deposit(float amount) {
    mainBalance += amount;
    printf("Amount deposited : $%.2f\n", amount);
    checkBalance();
}

void checkBalance() {
    printf("Your Balance is : $%.2f\n", mainBalance);
}






