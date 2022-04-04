#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    float altura, area, base;
    printf ("enter height value: ");
    scanf ("%f", &altura);
    (void) getchar ();
    printf ("enter width value: ");
    scanf ("%f", &base);
    (void) getchar ();
    area=altura*base;
   
    printf ("area value is: %g\n", area);
   
    if(altura==base){
       printf("the values correspond to a square\n"); 
    }
    return 0;
}
