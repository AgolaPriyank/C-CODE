#include <stdio.h>
int main()
{
    int i, j, sum, marks;
    float avg;

    for (i = 1; i <= 5; i++)
    {
        sum = 0;
        printf("\n--------------------------------------------\n");
        for (j = 1; j <= 3; j++)
        {
            printf("Enter your marks subject %d :- ", j);
            scanf("%d", &marks);

            sum = sum + marks;
        }

        avg = (float)sum / 3;

        printf("stdunt %d \n sum = %d\n avg = %f ", i, sum, avg);
    }

    return 0;
}