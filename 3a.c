#include <stdio.h>
int main()
{
    int i,j,c;
    c='A';

    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",c);
        }
        printf("\n");
        c++;
    }
    return 0;
}