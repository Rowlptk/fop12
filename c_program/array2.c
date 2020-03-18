#include<stdio.h>

void main()
{
    int num[10],i;
    printf("Enter 10 Values : \n");
    for(i=0;i<=9;i++)
    {
        printf("num[%d] = ",i);
        scanf("%d",&num[i]);
    }
    printf("\nThe values are : \n");
    for(i=0;i<=9;i++)
    {
        printf("value %d = %d\n",i+1,num[i]);
    }

    printf("\n\nThe Odd Values are : ");
    for(i=0;i<=9;i++)
    {
        if(num[i]%2 != 0)
        {
            printf("%d ",num[i]);
        }
    }
}
/*
{1,2,3,4,5,6,7,8,9,10} ==> 55
Odd Numbers are : 1 3 5 7 9
Even Numbers are : 2 4 6 8 10
Max Value : 10
Min Value : 1
Total Sum : 55
*/

