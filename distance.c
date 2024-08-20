#include <stdio.h>
void main()
{
    float km, meter, feet, inch, cm;

    printf("Enter the value of distance in km ");
    scanf("%f", &km);

    meter = km * 1000;

    feet = meter * 3.85;
    inch = feet * 12;
    cm = inch * 2.54;

    printf("meter=%.2f\n",meter);
    printf("feet=%.2f\n",feet);
    printf("inch=%.2f\n",inch);
    printf("cm=%.2f\n",cm);

}