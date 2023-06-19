#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char c;


    printf ("Enter 'c' for circumference | 'a' for area | 'v for volume :");
    scanf(" %c",&c);


    float r;
    printf("Enter radius :");
    scanf("%f",&r);

    switch(c)
    {
        case 'c' : printf("Circumference: %.2f\n",2*M_PI*r);
        case 'a' :printf ("Area: %.2f\n",M_PI*r*r);
        case 'y' :printf ("Circumference: %.2f\n",(4/3)*M_PI*r*r*r);
        break;

    }

    return 0;
}
