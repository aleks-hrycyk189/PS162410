#include <stdio.h>
#include <stdlib.h>

struct zespolone{
    double re;
    double im;
};

struct zespolone dodawanie (struct zespolone liczba1, struct zespolone liczba2)
{
    struct zespolone suma;
    suma.re=liczba1.re+liczba2.re;
    suma.im=liczba1.im+liczba2.im;
    return suma;
}

void wyswietl(struct zespolone liczba)
{
    printf("%f + %f i\n",liczba.re, liczba.im);
}
int main()
{
    struct zespolone X;
    X.re = 4;
    X.im = 5;
    struct zespolone Y;
    Y.re = 1;
    Y.im = 2;
    wyswietl(X);
    wyswietl(Y);
    dodawanie(X,Y);

    return 0;
}
