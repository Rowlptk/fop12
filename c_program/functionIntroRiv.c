#include<stdio.h>
#define PI 3.1417

void add();
void add2(float num1, float num2);
float areaOfCircle(float radius);

int I = 200; // global variable

void main() {
    add();
    add2(45.6, 67.6);
    printf("Area of Circle is : %.2f\n",areaOfCircle(2));
    float myArea = areaOfCircle(20);
    printf("Area of Circle is : %.2f\n",myArea);
}

float areaOfCircle(float radius){
    return PI*radius*radius;
}

void add2(float num1, float num2) {
    printf("The sum is %.2f\n", num1+ num2);
}

void add() {
    int num1 = 20;
    int num2 = 30;
    printf("The Sum is %d\n", num1+num2);
}
