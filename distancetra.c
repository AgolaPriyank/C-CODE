#include <stdio.h>
#include <conio.h>

int main ()
    {
        float d, u, t, a;

        printf("Enter the value of u:\n");
        scanf("%f" , &u);

        printf("Enter the value of t:\n");
        scanf("%f" , &t);

        printf("Enter the value of a:\n");
        scanf("%f" , &a);

        d = (u*t) + (0.5*a*t*t);

        printf("Total distance traveled is %f" , d);

        return 0;


    }