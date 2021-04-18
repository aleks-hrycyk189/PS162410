#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a1,a2,b1,b2,c1,c2,wx,wy,w,x,y;
    printf("Podaj a1 \n");
    scanf("%lf",&a1);
    printf("Podaj a2 \n");
    scanf("%lf",&a2);
    printf("Podaj b1 \n");
    scanf("%lf",&b1);
    printf("Podaj b2 \n");
    scanf("%lf",&b2);
    printf("Podaj c1 \n");
    scanf("%lf",&c1);
    printf("Podaj c2 \n");
    scanf("%lf",&c2);

    w = (a1*b2)-(b1*a2); //wyznacznik g³ówny
	wx = (c1*b2)-(b1*c2);
	wy = (a1*c2)-(c1*a2);


    if(w!=0)
    {
        printf(" Niewiadoma x wynosi:""%lf", wx/w);
        printf(" Niewiadoma y wynosi:""%lf", wy/w);
    }
    else
    {
       if(wx==0&&wy==0)
       {printf(" Uklad ma nieskonczenie wiele rozwiazan\n");}
       else
       {printf (" Uklad sprzeczny\n");}

    }
    return 0;
}
