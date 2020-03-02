// 80-100 A
/*if(n>=80 and n<=100)
{
    printf("A");
}
else if(60-79)
{
    printf("B")
}*/
// 60-79 B
// 40-59 C
// 0-39 Fail
// 101 ==> Invalid marks


#include<stdio.h>

void main()
{
    float m;
    printf("Enter your mark : ");
    scanf("%f",&m);
    if(m>=80 && m<=100)
    {
        printf("Grade A!");
    }
    else if(m>=60 && m<80)
    {
        printf("Grade B!");
    }
    else if(m>=40 && m<60)
    {
        printf("Grade C!");
    }
    else if(m>=0 && m<40)
    {
        printf("You Failed!");
    }
    else {
        printf("Invalid Marks!");
    }
}



// nested if    2020-02-29

//2019-12-31
//2019-04-31

//switch case




















