#include <stdio.h>
int main()
{
    int n[5];
    int i, max;

    for (i = 0; i <= 4; i++)
    {
        printf("Enter n ");
        scanf("%d", &n[i]);
    }

    for (i = 0; i <= 4; i++)
    {
        if (n[i] > max)
        {
            max = n[i];
        }
    }
    printf("%d is max number", max);
    return 0;
}