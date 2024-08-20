#include <stdio.h>
#include <string.h>
int main()
{
    char s[20],c,d;
    int i,l;

    printf("Enter s: ");
    gets(s);

    printf("Enter char which replace: ");
    c=getchar();
    fflush(stdin);

     printf("Enter char by replace: ");
    d=getchar();
   

    l=strlen(s);

    for(i=0; i<l;i++ )
    {
        if(s[i]==c)
        {
            s[i]=d;
        }
        
    }
    printf("s= %s", s);

    return 0;
}