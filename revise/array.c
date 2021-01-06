// array is a variable
// multiple values
// in sequence of memory
// under a same name
// under a same datatype
/*
98 _ _ 100 _ _
0  1 2 3 4 5
using index
int myary
*/

#include<stdio.h>

void main() {
    int myary[5] = {45, 89, 90, 56, 33};
    printf("myary[0] = %d",myary[0]);
    myary[0] = 67;
    printf("\nmyary[0] = %d\n",myary[0]);

    for(int i = 0; i < 5; i++) {
        scanf("%d", &myary[i]);
    }
    printf("Array Values Are: \n");
    for(int i = 0; i < 5; i++) {
        printf("\nmyary[%d] = %d",i, myary[i]);
    }

    int max  = myary[0];
    for(int i = 1; i < 5; i++) {
        if(max < myary[i]) {
            max = myary[i];
        }
    }
    printf("\nThe Max Value is : %d", max);

    printf("\nThe Prime numbers are: ");

    for(int i = 0; i < 5; i++) {
        int flag = 0;
        for(int n=2; n < myary[i]-1; n++) {
            if(myary[i] % n == 0) {
                flag = 1;
                break;
            }
        }
        if(flag == 0) {
            printf("\n%d",myary[i]);
        }
    }
}










