#include <stdio.h>
int fact(int);
int main()
{
    int ans,n;
    printf("Enter number: ");
    scanf("%d", &n);

    ans=fact(n);
    printf("fact of %d = %d", n,ans);

    return 0;
}

int fact(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }

    else{
        return n* fact(n-1);
    }
}