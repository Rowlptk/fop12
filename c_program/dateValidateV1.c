// 1000-9999
// 1-12
// 1-30
// 2020-02-29
#include<stdio.h>

void main()
{
    int y,m,d;
    printf("Enter a Date [yyyy-mm-dd] : ");
    scanf("%d-%d-%d",&y,&m,&d);
    printf("Year = %d\nMonth = %d\nDay = %d\n",y,m,d);
    if(y>=1000 && y<=9999)
    {
        if(m>=1 && m<=12)
        {
            if(d>=1 && d<=30)
            {
                printf("Date is Valid!");
            }
            else
            {
                printf("Day is Invalid!");
            }
        }
        else
        {
            printf("Month is Invalid!");
        }
    }
    else
    {
        printf("Year is Invalid!");
    }
}




if(d>=1 && d<=31) && (m==1 || m==3 || m==5 || m==7
                      || m==8 || m==10 || m==12)

1-31 ==> 1,3,5,7,8,10,12
1-30 ==> 4,6,9,11
1-28 ==> 2
1-29 ==> 2, leap year









