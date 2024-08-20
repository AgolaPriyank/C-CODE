#include <stdio.h>
int main()
{
    int maths, science;
    printf("IF maths paased get 15\n ,science paased 15\n,both 45\n");
    printf("Enter your marks of maths\n");
    scanf("%d", &maths);
    printf("Enter your Science's marks\n");
    scanf("%d", &science);
    if (maths >= 35 && science >= 35)
        printf("You got 45");
    else if (maths >= 35 || science >= 35)
        printf("You get 15 ruppes");
    else
        printf("You got nothing");
}