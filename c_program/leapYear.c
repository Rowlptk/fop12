#include<stdio.h>



void main()
{
    int y;
    printf("Enter a Year : ");
    scanf("%d",&y);
    if((y%400 == 0)||(y%4==0 && y%100!=0))
    {
        printf("Leap Year");
    }
    else {
        printf("Not A Leap Year");
    }
}
