#include <stdio.h>
int main()
{
    int i, h, w, count = 0;

    for (i = 1; i <= 5; i++)
    {
        printf("----------------------------\n");

        printf("Enter your height:- ");
        scanf("%d", &h);

        printf("Enter your weight:- ");
        scanf("%d", &w);

        if (h > 170 && w < 50)
        {
            count++;
        }
    }

    printf("Number of person height > 170 and weight < 50 is %d", count);

    return 0;
}
