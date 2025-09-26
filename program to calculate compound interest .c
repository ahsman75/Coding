/*
Name:Emmanuel Mulei Nzuki
Regno:CT101/G/26526/25
description: program to calculate compound interest 
*/
#include <stdio.h>

#include<math.h>
int main()
{   float principle_amount, compound_interest,rate,time,final_amount;


int n;

    printf("enter the principle_amount\n");
    scanf("%f",&principle_amount);
    printf("enter the  rate\n");

    scanf("%f",&rate);

    printf("enter the time\n");
    scanf("%f",&time);
    printf("enter the number of times interest is compounded per year\n");
    scanf("%f",&n);
// calculate compound interest
    final_amount =principle_amount*pow((1+(rate/100)/n),n*time);
    compound_interest=final_amount- principle_amount;


//display results
    printf("compound_interest =%.2f\n",compound_interest);


    printf ("maths is easy mate");

    return 0;
}






