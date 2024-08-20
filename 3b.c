#include <stdio.h>
int main()
{
    int i,j,c;

    for(i=5;i>=1;i--)
    {
        c='A';
        for(j=1;j<=i;j++)
        {
            printf("%c ", c++);
        }
        printf("\n");
    }
    return 0;
}