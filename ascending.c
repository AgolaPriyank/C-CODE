#include <stdio.h>
int main()
{
    int num [5];
    int i,j,temp;

    for(i=0;i<=4;i++)
    {
        printf("Enter num: ");
        scanf("%d", &num[i]);
    }

    for(i=0 ; i<=4 ; i++)
    {
        for(j=i+1 ; j<=4 ; j++)
        {
            if(num[i] > num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    printf("array in ascending order:- ");

    for(i=0 ; i<=4; i++)
    {
        printf("%d\n", num[i]);
    }
    return 0;

}