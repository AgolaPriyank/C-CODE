#include <stdio.h>
#include <conio.h>
int main()
    {
        float basic, da, hra , ma , pf, gross , nt;

        printf("Enter the value of basic:\n");
        scanf("%f" , &basic);

        da = basic/10;
        hra = 0.0750*basic;
        ma = 300;
        pf = 0.1250*basic;

        gross = basic + da + hra +ma ;
        nt = gross - pf;
        printf("===============================\n");
  
        printf("        Pay Slip\n");
               
        printf("===============================\n");
        printf("da   :- %.2f\n" , da);
        printf("===============================\n");
  
        printf("hra  :-%.2f\n" , hra);
        printf("===============================\n");
  
        printf("pf   :-%.2f\n" , pf);
        printf("===============================\n");
  
        printf("gross:-%.2f\n" , gross);
        printf("===============================\n");
  
        printf("nt   :-%.2f\n" , nt);
        printf("===============================\n");
  

        return 0;

    }