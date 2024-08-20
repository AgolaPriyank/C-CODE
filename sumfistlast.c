#include <stdio.h>
int main()
{
    int last,num,first,sum;

    printf("Enter the number:- ");
    scanf("%d", &num);

    last = num%10;

    while(num>9)
    {
        num = num/10;
    }

    first=num;

    sum = first+last;

    printf("sum of first digit and last digit is %d", sum);

    return 0;
}
