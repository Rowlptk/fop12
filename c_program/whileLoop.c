#include<stdio.h>

void main()
{
    int s = 10,n;
    printf("Kun wanza?");
    scanf("%d",&n);
    while(s>=1)
    {
        printf("%d x %d = %d\n",n,s,n*s);
        s--;
    }
}
