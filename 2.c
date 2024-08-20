#include <stdio.h>
int main()
{
    int n;

    again:
        printf("Enter the number ");
        scanf("%d",&n);

        if(n%5==0)
        {
            printf("correct\n");
            goto again;
        }
        else {
            printf("game over");
        }
        return 0;
}
