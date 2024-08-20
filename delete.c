#include <stdio.h>
#include <string.h>
char strdel(char s1,int pos,int n);
int main()
{
    char s1[20];
    int pos, n;

    printf("Enter s1: ");
    gets(s1);

    printf("Enter posisan: ");
    scanf("%d", &pos);

    printf("Enter num: ");
    scanf("%d", &n);
    strdel(s1,pos,n);

    return 0;
}

char strdel(char s1,int pos, int n)
{
    int i,j,l;
    l=strlen(s1);

    for(i=pos,j=pos+n;j<l;i++,j++)
    {
       s1[i]=s1[j];

    }
    s1[i]='\0';

    printf("s1 = %s", s1);


}
