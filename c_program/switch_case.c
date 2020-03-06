// Switch Case
// constants

#include<stdio.h>

void main()
{
    int n;
    printf("Press \n1.Data Pack\n2.Voice Pack\n3.Message Pack\n4.Exit\n  Select : ");
    scanf("%d",&n);
    switch(n)
    {
    case 1 :
    case 5 :
        printf("Data Pack Choose Gariyo");
        break;
    case 2 :
        printf("Voice Pack Choose Gariyo");
        break;
    case 3 :
        printf("Message Pack Choose Gariyo");
        break;

    case 4 :
        exit(0);

    default :
        printf("Invalid Option!");

    }
}



Output :
    Enter Two Numbers: 34 56
    Press :
        + to ADD
        - to Subtract
        * to Multiply
        / to Divide
        select : +

        34 + 56 = 90












