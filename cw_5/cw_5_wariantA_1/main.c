#include <stdio.h>
#include <stdlib.h>

void wskaznik(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    //printf("Podaj wartosc liczby a: ");
    //scanf("%d",&a);
    //printf("Podaj wartosc liczby b: ");
    //scanf("%d",&b);

    //printf("Stare wartosci: %d %d\n",a,b);
    //wskaznik(&a,&b);
    //printf("Nowe wartosci : %d %d\n",a,b);



    int c = 4, d = 7;
    printf("\n PRZYPADEK TESTOWY dla c = %d oraz d = %d", c,d);
    wskaznik(&c,&d);
    printf(" \n Nowe wartosci : %d %d\n",c,d);

    return 0;
}
