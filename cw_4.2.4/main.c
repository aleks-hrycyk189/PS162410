#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float suma_ele(int n, const int tab[])
{
   float iloczyn = 1;
   for(int i=0; i<n; i++)
    {
        iloczyn *= tab[i];
    }
    float srednia;
    srednia = sqrt(iloczyn);
    return srednia;
}


int main()
{
    const int tab[4] = {2,4,6,5};

    printf("Srednia elemntow tablicy wynosi: %lf ", suma_ele(4,tab));


    return 0;
}
