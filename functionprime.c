#include <stdio.h>
int prime(int );
int main()
{
    int n,ans;
    printf("Enter number: ");
    scanf("%d", &n);

    ans=prime(n);

    if(ans==1)
    {
        printf("prime number");
    }
    else{
        printf("Not prime number");
    }
    return 0;
}

int prime(int n)
{
    int i,flag=1;

    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }

    return flag;
}
