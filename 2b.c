#include <stdio.h>
int main()
{
    int i, j, k;
    
        for (i = 5; i >= 1; i--)
        {
            for (k = 1; k <= i; k++)
            {
                printf(" ");
            }
            for (j = 1; j <= 6 - i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }

        
    
    return 0;
}