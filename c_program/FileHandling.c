#include<stdio.h>

void main() {
    FILE *fp;
    char str[100];
    char ch;
    float num;
    //fp = fopen("demo.txt","a");
    //fprintf(fp, " Smile");
    //fclose(fp);

    fp = fopen("demo.txt","r");

    if(fp == NULL) {
        printf("File Not Found!");
        exit(0);
    }

    //fscanf(fp, "%s", &str);
    //puts(str);

    /*rewind(fp);
    while(!feof(fp)) {
        ch = fgetc(fp);
        putchar(ch);
    }*/

    // last value
    // while(fscanf(fp, "%d", &num) == 1);

    // first value
    //fscanf(fp, "%d", &num);

    //fscanf(fp, "%f", &num);

    //while(fscanf(fp, "%f", &num) == 1);
    //printf("%f", num);
    //w => Write, append => a, read => r
}
