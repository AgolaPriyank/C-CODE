#include <stdio.h>
void main()
    {
        float b , h , area;

        printf("Enter the value of base\n");
        scanf("%f" , &b);

        printf("Enter the value of height\n");
        scanf("%f", &h);

        area = 0.5*b*h;

        printf("The value of area is %f", area);
    }