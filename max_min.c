#include <stdio.h>
int main()
{
    int a, i, max, min;

    for (i = 1; i <= 10; i++)
    {
        printf("Enter the number:- ");
        scanf("%d", &a);

        if (i == 1)
        {
            max = a;
            min = a;
        }

        else if (a > max)
        {
            max = a;
        }
        else if (a < min)
        {
            min = a;
        }
    }

    printf("max=%d \n min=%d", max, min);

    return 0;
}