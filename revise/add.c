#include<stdio.h>

void main()
{
    int x,y,sum;
    /*x = 8;
    y = 10;*/
    printf("Enter two numbers: ");
    scanf("%d%d",&x,&y);

    sum = x + y;
    printf("The Sum is %d",sum);
    printf("\n%d + %d = %d",x,y,sum);
}
