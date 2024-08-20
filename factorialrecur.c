#include <stdio.h>
int fact(int);
int main()
{
    int n,ans;
    printf("Enter n: ");
    scanf("%d", &n);

    ans=fact(n);

    printf("fact of %d is %d", n,ans);

    return 0;
}

int fact(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    else{
        return n* fact(n-1);
    }
}
