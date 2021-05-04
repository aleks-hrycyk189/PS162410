#include <stdio.h>
#include <stdlib.h>


void srednia(int n, int tab[])
{
   int suma = 0;
   for(int i=0; i<n; i++)
    {
        suma += tab[i];
    }
    float srednia;
    srednia = suma / n ;
    printf("%lf", srednia);
}


int main()
{
    int tab[5] = {2,4,6,8,-10};

    srednia(5,tab);


    return 0;
}
