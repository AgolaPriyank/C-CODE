#include <stdio.h>
int main()
{
    int n;
    while (1)
    {
        printf("Enter the maltipal of 5\n ");
        scanf("%d",&n);

        if(n%5==0)
        {

            printf("correct\n");

        }
        else
        {
            printf("game over");
            break;
        }

    }
    return 0;
}
