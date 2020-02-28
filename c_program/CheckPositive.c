#include<stdio.h>

void main()
{
    int num;
    printf("Enter any Number : ");
    scanf("%d",&num);
    if(num>0)
    {
        printf("The Number is Positive");
    }
    else if(num==0)
    {
        printf("Number is Zero");
    }
    else
    {
        printf("Negative");
    }
}
