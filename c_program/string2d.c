#include<stdio.h>

void main(){
    char usr[5][20] = {"admin", "fop", "java", "python", "data"};
    char str1[20];
    int i, flag = 0;
    printf("Search Username:  ");
    gets(str1);
    for(i = 0; i<5; i++) {
        if(strcmp(usr[i], strlwr(str1)) == 0) {
            flag = 1;
            break;
        }
    }

    if(flag == 1) {
        printf("%s found at position %d", str1, i+1);
    } else {
        printf("Invalid");
    }
}
