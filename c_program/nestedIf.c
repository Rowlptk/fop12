#include<stdio.h>

void main()
{
    int wa, T;
    T = 15000;
    printf("Enter an Amount to WithDraw : ");
    scanf("%d",&wa);
    if(wa<=T)
    {
        if(wa<=10000)
        {
            if(wa%500 == 0)
            {
               T = T-wa;
                printf("Withdraw Amount = %d\n",wa);
                printf("Balance Left = %d",T);
            }
            else
            {
                printf("Amount must be multiple of 500");
            }

        }
        else
        {
            printf("Per Transaction limit exceeds");
        }
    }
    else
    {
        printf("InSufficient Balance");
    }
}
