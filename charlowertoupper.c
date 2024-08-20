#include <stdio.h>
void upper(char[]);
int main()
{
    char s[20];
    printf("enter s: ");
    gets(s);

    upper(s);
    return 0;
}

void upper(char s[])
{
    int i;
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]>=97 && s[i]<=122)
        {
            s[i]=(char) s[i]-32;
        }
    }

    printf("string in upper case is %s",s);

}
