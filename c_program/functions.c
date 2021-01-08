// functions
// small block of code
// function declare; function define; function call;

#include<stdio.h>

// parameterless function
void printMsg();

// parameterized function
void printMyMsg(int year);

int addTenToYear(int year);

void main() {
    printMsg();
    printMyMsg(2022);
    printMyMsg(2023);
    //printf("\n%d",addTenToYear(2020));
    int tenthYear = addTenToYear(2020);
    printf("\n%d",tenthYear);
}

int addTenToYear(int year) {
    return year+10;
}

void printMyMsg(int year) {
    printf("Welcome to %d!\n", year);
}

void printMsg() {
    printf("Welcome to 2021!\n");
}
