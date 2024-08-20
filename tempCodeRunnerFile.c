#include <stdio.h>
int mainn()
{
    int i,j;
    int a [3] [3] = {  {10,20,30},
                        {40,50,60},
                       {70,80,90}    };

    int b [3] [3] = {  {10,20,30},
                        {40,50,60},
                       {70,80,90}   } ;

    int c [3] [3];

    printf("matrix a+b: \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}