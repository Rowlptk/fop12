#include<stdio.h>
#define PI 3.1415

// P = 2*PI*r
void main()
{
    float d,r,A;
    printf("Enter a diameter : ");
    scanf("%f",&d);
    r = d/2;
    A = PI * r * r;
    printf("Area of Circle is %.2f",A);
}

// d
// r = d/2
// A = Pi*r*r
