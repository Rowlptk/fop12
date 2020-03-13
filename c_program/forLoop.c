// 50 - 60 ==> multiple of 3 ==> list down
#include<stdio.h>

void main()
{
    int i;
    for(i=50;i<=60;i++)
    {
        if(i%3 == 0){
            printf("%d\n",i);
        }
    }
}
