#include <stdio.h>
#include <stdlib.h>


void suma_ele(int n, int tab[])
{
   int suma = 0;
   for(int i=0; i<n; i++)
    {
        suma += (tab[i] * tab[i]);
    }
    printf("Suma elementow tablicy to : %d ", suma);
}


int main()
{
    int tab[4] = {2,4,6,5};

    suma_ele(4,tab);


    return 0;
}
