#include <stdio.h>
#define pi 3.14159
int main()
{   float radius,height, volume, surface_area ;
    
    
    printf("enter the radius of the cylinder\n");
    scanf("%f",&radius);
    printf("enter the height of the cylinder\n");

    scanf("%f",&height);

// calculate volume 
volume =pi *radius*radius *height;

//calculate surface area 
surface_area =2 *pi*radius *height +2 *pi*radius *radius;
//display results 
printf("The volumeof the cylinder =%.2f\n",volume);
printf("The surface_area of the cylinder =%.2f\n",surface_area);

return 0;}


    



