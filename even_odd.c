#include <stdio.h>
int main()
{
    int num;

    printf("Enter the number:- ");
    scanf("%d",&num);

    if(num%2 == 0)
    {
        printf("Last digit of number is even");
    }
    else{
        printf("last digit of number is odd");
    }

    return 0;
}