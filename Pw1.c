#include <stdio.h>
void main ()
{
    float a, r;
    printf("Enter the radius of circle\n");

    scanf("%f", &r);

    a = 3.14 * r *r;

    printf("The area of circle is %f\n", a);

    return 0;
}