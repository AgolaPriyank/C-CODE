#include <stdio.h>
int main()
{
    int num,remender,revnum=0;

    printf("Enter the number:- ");
    scanf("%d", &num);

    while(num != 0)
    {
        remender = num%10;

        num = num/10;

        revnum = (revnum*10)+remender;

    }

    printf("reversenumber=%d",revnum);

    return 0;
}
