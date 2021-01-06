#include<stdio.h>

void main() {
    int ary[2][2];
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            scanf("%d",&ary[i][j]);
        }
    }
     for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("ary[%d][%d] = %d\n",i,j,ary[i][j]);
        }
    }

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d  ",ary[i][j]);
        }
        printf("\n");
    }

    // matrix addition
    // strings, function, structure, file handling
}
