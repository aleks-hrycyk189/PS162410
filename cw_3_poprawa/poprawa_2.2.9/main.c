#include <stdio.h>
#include <stdlib.h>

int potegowanie(int n, int m)
{
    int wynik=1;
    for(int i=1; i<=m; i++)
    {
        wynik *= n;
    }
    return wynik;
}

int pierwiastkowanie(int n, int k)
{
    int wynik_ost;
    for(int i=0; i<=n; i++)
    {
        if(potegowanie(i,k)<=n)
        {
            wynik_ost= i;
        }
    }
    return wynik_ost;
}

int main()
{
    int n,m;
    printf("Podaj liczbe n, ktora bedzie liczba pod pierwiastkiem: ");
    scanf("%d", &n);
    printf("Podaj liczbe m, ktora bedzie stopniem pierwiastka: ");
    scanf("%d", &m);
    printf("Wynik to: %d", pierwiastkowanie(n,m));

    return 0;
}
