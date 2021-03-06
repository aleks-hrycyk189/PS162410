#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c, delta, x1,x2,x;
    printf("Podaj a \n");
    scanf("%lf",&a);
    printf("Podaj b \n");
    scanf("%lf",&b);
    printf("Podaj c \n");
    scanf("%lf",&c);

    delta= (b*b)- (4*a*c);


    if(delta>0)
    {
        x1= (-b + sqrt(delta))/ (2*a);
        x2= (-b - sqrt(delta))/ (2*a);
        printf("X1 wynosi:""%lf", x1);
        printf("X2 wynosi:""%lf", x2);
    }
    else if (delta=0)
    {
       x= (-b)/2*a;
    }
    else if(delta=0)
    {
        printf("Uklad nie ma miejsc zerowych");
    }
    return 0;
}
