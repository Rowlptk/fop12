#include<stdio.h>

void main()
{
    int n1,n2;
    printf("Enter First Number : ");
    scanf("%d",&n1);
    printf("\n");
    while(n1<0)
    {
        printf("Please Enter Positive Value: ");
        scanf("%d",&n1);
    }
    printf("\n");
    printf("Enter Second Number : ");
    scanf("%d",&n2);
    printf("\n");
    while(n2<0)
    {
        printf("Please Enter Positive Value: ");
        scanf("%d",&n2);
    }
    printf("%d + %d = %d",n1,n2,(n1+n2));
}
