#include<stdio.h>

void checkBalance();
void deposit(float amount);
void withdraw(float amount);
void menu();
float amount();
void proceed();

void login();

float totalBalance = 1000;
void main() {
   login();
}

void login() {
    char usr[20] = "admin";
    char pwd[20] = "12345";
    char str1[20], str2[20];
    printf("Enter username : ");
    gets(str1);
    printf("Enter password : ");
    gets(str2);
    if((strcmp(usr, str1) == 0) && (strcmp(pwd, str2) == 0)) {
        printf("Welcome User\n");
        menu();
    } else {
        printf("Login Failed!");
    }
}


float amount() {
    float amount;
    printf("Enter Amount : ");
    scanf("%f",&amount);
    return amount;
}

void proceed() {
    char ch;
    printf("\n\nPress Y to continue... \n");
    scanf(" %c",&ch);
    if(ch == 'Y' || ch == 'y') {
        menu();
    } else {
        exit(0);
    }
}

void menu() {
    int n;
    printf("Press: \n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit \n");
    scanf("%d",&n);
    switch(n) {
        case 1:
            checkBalance();
            break;
        case 2:
            deposit(amount());
            break;
        case 3:
            withdraw(amount());
            break;
        case 4:
            exit(0);

        default:
            printf("\n");
            menu();
    }
    proceed();
}


void withdraw(float amount) {
    totalBalance = totalBalance - amount;
    printf("\nAmount Deducted : $%.2f\n", amount);
    checkBalance();
}

void deposit(float amount) {
    totalBalance = totalBalance + amount;
    printf("\nDeposited Amount is $%.2f\n", amount);
    checkBalance();
}

void checkBalance() {
    printf("Your Total Balance is : $%.2f",totalBalance);
}
