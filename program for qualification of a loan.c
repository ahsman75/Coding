/*
Name:Emmanuel Mulei Nzuki
Regno:CT101/G/26526/25
description: program for qualification of a loan 
*/
// program for qualification of aloan

#include<stdio.h>

int main () {
    int age;
    int income;
    printf("welcome to our bank. This is the loan department, enter details;\n");

    printf("enter your age;\n");

    scanf("%d",&age);
// validation complex
    if(age>=21) {
        printf("enter annual income;\n");
        scanf("%d",&income);

        if(income>=21000) {
            printf("congratulations you qualify for a loan");
        }

        else {
            printf("unfortunately we are unable to offer you a loan at this time");
        }
    }
    else {
        printf("unfortunately we are unable to offer you a loan at this time");
    }
    return 0;
}
