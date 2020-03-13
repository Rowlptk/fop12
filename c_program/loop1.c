// 70-200 ==> 5 multiple but not multiple of 25
// leap year print from 1500 - 2500




#include<stdio.h>

void main()
{
    int i;
    for(i=70;i<=200;i++)
    {
        if((i%5 == 0)&&(i%25!=0))
        {printf("%d\n",i);
        }
    }
}
