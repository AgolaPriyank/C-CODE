#include <stdio.h>
int swap(int*,int*);
int main()
{
    int x,y;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);

    printf("before funcation call \n x=%d y=%d\n", x,y);

    swap(&x,&y);
    printf("after funcation call \n x=%d y=%d\n", x,y);

    return 0;
}

int swap(int*x, int*y)
{
    int z;
    z = *x;
    *x = *y;
    *y = z;

    printf("in funn \n x=%d y=%d\n", *x,*y);
}