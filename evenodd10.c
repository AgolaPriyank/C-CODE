#include <stdio.h>
int main()
{
    int n [10];
    int i;
    for(i=0;i<=9;i++)
    {
        printf("Enter n ");
         scanf("%d", &n[i]);
    }
    for(i=0;i<=9;i++)
    {
        if(n[i]%2==0)
        {
            printf("%d is even\n",n[i]);

        }
        else 
        {
            printf("%d is odd\n", n[i]);
        }
        
    }
    return 0;
}