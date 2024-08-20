#include <stdio.h>
int add(int);
int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    add(n);
    return 0;
}

int add(int n)
{
    int sum=0,i;

    for(i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    printf("first n number of sum= %d", sum);

    return sum;
}
