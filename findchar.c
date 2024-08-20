#include <stdio.h>
#include <string.h>
int main()
{
    char s[20],c;
    int l,i,fla=0;

    printf("Enter s: ");
    gets(s);

    printf("Enter character: ");
    c=getchar();

    l=strlen(s);

    for(i=0;i<l;i++)
    {
        if(s[i]==c)
        {
          printf("index of charactar %c is %d\n", c,i);
          fla=1;

        }
    }
    if(fla==0)
    {
        printf("inveled character");
    }
    return 0;
}