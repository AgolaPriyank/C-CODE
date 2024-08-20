#include <stdio.h>
#include <string.h>

int main()
{
    char s[20], c;
    int i, j, l;

    printf("Enter s: ");
    gets(s);

    printf("Enter char: ");
    c = getchar();

    l = strlen(s);

    for (i = 0; i < l; i++)
    {
        if (s[i] == c)
        {
            for (j = i; j < l; j++)
            {
                s[j] = s[j + 1];
            }
        }
        i--;
    }
    printf("s=%s", s);
    return 0;
}
