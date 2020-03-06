#include<stdio.h>

void main()
{
    char ch;
    printf("Press Y to Continue... ");
    scanf(" %c",&ch);
    if(ch == 'Y' || ch == 'y')
    {
        printf("Welcome to Citizens Bank");
    }
    else
    {
        printf("Thank you for using our services\nSee you soon!");
    }

}
