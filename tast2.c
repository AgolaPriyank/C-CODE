#include <stdio.h>
int main()
{
    int i,n;
    printf("Enter the number ");
    scanf("%d",&n);

    i=1;
    while(i<=n)
    {
        if(n%i==0)
        {

            printf("%d ",i);



        }
        i++;
    }


    return 0;

}
