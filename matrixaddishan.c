#include <stdio.h>
int mainn()
{
    int i,j;
    int A [3] [3] = {  {10,20,30},
                        {40,50,60},
                       {70,80,90}    };
 
    int B [3] [3] = {  {10,20,30},
                        {40,50,60},
                       {70,80,90}   } ;

    int C [3] [3];

    printf("matrix a+b: \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}