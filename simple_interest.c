#include <stdio.h>
#include <conio.h>

void main()
    {
        float i, p, r, n;

        printf("Enter the value of principle amount\n");
        scanf("%f" , &p);

        printf("Enter the value of rate of interest\n");
        scanf("%f" , &r);

        printf("Enter the value  number of years\n ");
        scanf("%f" , &n);

        i = (p*r*n)/100;

        printf("simple interest = %f" , i);



    }