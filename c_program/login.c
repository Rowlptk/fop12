
#include<stdio.h>
#include<string.h>

void main() {
    char usr[20] = "admin";
    char pwd[20] = "123";
    char str1[20], str2[20];
    printf("Enter your username : ");
    gets(str1);
    printf("Enter password: ");
    gets(str2);
    if((strcmp(usr, str1) == 0) && (strcmp(pwd, str2) == 0)) {
        printf("Welcome!");
    }
    else {
        printf("Login failed!");
    }
}
