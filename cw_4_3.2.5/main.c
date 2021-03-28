#include <stdio.h>
#include <stdlib.h>

suma_wskaznik(const int *a, const int *b)
{
    int suma;
    suma = *a + *b;
    return suma;
}



int main()
{
    int c = 3, d = 5;
    printf("Wartosci: %d %d\n",c,d);
    printf("Suma wynosi : %d ", suma_wskaznik(&c,&d));
    return 0;
}
