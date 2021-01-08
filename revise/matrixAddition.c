// add to matrix

//2 4     1 5     3 9
//3 6     8 0     11 6

# include<stdio.h>

void main() {
    int m1[2][2], m2[2][2], res[2][2];
    printf("Enter m1 2X2 matrix values:\n");
    for(int i=0; i<2; i++) {
        for(int j=0; j<2 ; j++) {
            printf("m1[%d][%d] = ", i, j);
            scanf("%d",&m1[i][j]);
        }
    }

    printf("\nEnter m2 2X2 matrix values:\n");
    for(int i=0; i<2; i++) {
        for(int j=0; j<2 ; j++) {
            printf("m2[%d][%d] = ", i, j);
            scanf("%d",&m2[i][j]);
        }
    }


    printf("\nAddition result is : \n");
    for(int i=0; i<2; i++) {
        for(int j=0; j<2 ; j++) {
            res[i][j] = m1[i][j] + m2[i][j];
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
}
