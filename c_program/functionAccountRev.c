// Account Basic Transactions
// check Balance, deposit, withdraw

#include<stdio.h>

void checkBalance();
void deposit(float amount);
void withdraw(float amount);
float userAmount();
void menu();
void readBalance();
void writeBalance(float balance);
void proceed();

float mainBalance;

void main() {
  menu();
}

void proceed() {
    char ch;
    printf("\n\nPress Y to continue... \n");
    scanf(" %c",&ch);
    if(ch == 'Y' || ch == 'y') {
        system("cls");
        menu();
    } else {
        exit(0);
    }
}

void writeBalance(float balance) {
    FILE *fp;
    fp = fopen("demo.txt", "a");
    fprintf(fp, "\n%.2f", balance);
    fclose(fp);
}

void readBalance() {
    FILE *fp;
    fp = fopen("demo.txt","r");
    if(fp == NULL) {
        printf("Internal Error!");
        exit(0);
    }
    while(fscanf(fp, "%f", &mainBalance) == 1);
    fclose(fp);
}

void menu() {
    int n;
    printf("Press :\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
    scanf("%d",&n);
    readBalance();
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
    proceed();
}

float userAmount() {
    float amount;
    printf("Enter Amount : ");
    scanf("%f", &amount);
    return amount;
}

void withdraw(float amount) {
    mainBalance -= amount;
    writeBalance(mainBalance);
    printf("Deducted Amount : $%.2f\n", amount);
    checkBalance();
}

void deposit(float amount) {
    mainBalance += amount;
    writeBalance(mainBalance);
    printf("Amount deposited : $%.2f\n", amount);
    checkBalance();
}

void checkBalance() {
    printf("Your Balance is : $%.2f\n", mainBalance);
}






