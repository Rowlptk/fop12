#include<stdio.h>
// age check
void main()
{
    int age;
    printf("Enter Your Age : ");
    scanf("%d",&age);
    (age>=18)?printf("you can vote"):
        printf("You cannot vote");
}
