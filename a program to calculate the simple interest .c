#include <stdio.h>


int main()
{   float principle_amount, rate,time, simple_interest;


    printf("enter the principle_amount\n");
    scanf("%f",&principle_amount);
    printf("enter the  rate\n");

    scanf("%f",&rate);

    printf("enter the time\n");
    scanf("%f",&time);
// calculate simple interest
    simple_interest =principle_amount*time*(rate/100);


//display results
    printf("The simple_interest =%.2f\n",simple_interest);


    printf ("maths is easy mate");

    return 0;
}






