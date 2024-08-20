#include<stdio.h>
#include<string.h>
void main()
{
    char S1[20],S2[20],S3[20],S4[20],S5[20],*S6,ch,*S7;
    int a,b,c;

    printf("Enter string 1:\n");
    gets(S1);

    printf("Length of string S1 is=%d\n",strlen(S1));

    strcpy(S2,S1);
    printf("String 2 is %s\n",S2);

    printf("Enter string 3:\n");
    gets(S3);

    strcat(S3,S1);
    printf("Merged string=%s\n",S3);

    if(strcmp(S1,S2)==0)
    {
        printf("String S1 and S2 are same\n");
    }
    else
    {
        printf("String S1 and S2 are not same\n");
    }
    
     if(strcmp(S1,S3)==0)
    {
        printf("String S1 and S3 are same\n");
    }
    else
    {
        printf("String S1 and S3 are not same\n");
    }

    strrev(S1);
    printf("Reverse string of S1 is %s\n",S1);

    printf("Enter string 4:\n");
    gets(S4);

    S6=strstr(S3,S4);
    printf("Substring_1=%s\n",S6);

    printf("Enter character:\n");
    scanf("%c",&ch);

    S7=strchr(S4,ch);
    printf("Substring_2=%s\n",S7);
    
    printf("Enter string 5:\n");
    gets(S5);

    strlwr(S5);
    printf("New string S5=%s\n",S5);

    strupr(S4);
    printf("New string S4=%s\n",S4);

    printf("Enter number:\n");
    scanf("%d",&a);
    strncat(S3,S1,a);
    printf("Merge string=%s\n",S3);

    printf("Enter number:\n");
    scanf("%d",&b);
    strncpy(S2,S1,b);
    printf("Copied string S2=%s\n",S2);

    printf("Enter number:\n");
    scanf("%d",&c);

    if(strncmp(S1,S2,c)==0)
    {
        printf("String S1 and S2 are same of %d characters",c);
    }
    else
    {
      printf("String S1 and S2 are not same of %d characters",c);  
    }

     if(strncmp(S1,S3,c)==0)
    {
        printf("String S1 and S3 are same of %d characters",c);
    }
    else
    {
      printf("String S1 and S3 are not same of %d characters",c);  
    }

}