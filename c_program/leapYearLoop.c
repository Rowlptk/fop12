#include<stdio.h>

// generate prime number:
//500-600

void main()
{
    int i;
    for(i=1500;i<=2500;i++)
    {
        if((i%400==0)||((i%4==0)&&(i%100!=0)))
        {
            printf("%d\n",i);
        }
    }
}
