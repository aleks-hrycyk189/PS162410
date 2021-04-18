// Tutaj nie znalazlam pomyslu, jak mozna zrobic to bez funckji
#include <stdio.h>
#include <stdlib.h>

double pierwiastkowanie(double n, double m)
{
    double wynik;
    wynik = pow(n,(1/m));
    return wynik;
}

int main()
{
    double n,m;
    printf("Podaj liczbe n, bedzie to liczba pod pierwiastkiem: ");
    scanf("%lf", &n);
    printf("Podaj liczbe m, bedzie to stopien pierwiastka: ");
    scanf("%lf", &m);
    printf("Wynik to %lf", pierwiastkowanie(n,m));
    return 0;
}
