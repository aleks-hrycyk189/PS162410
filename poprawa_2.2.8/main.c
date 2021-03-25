#include <stdio.h>
#include <stdlib.h>

int pierwiastkowanie(int n)
{
    int wynik=0;
    for(int i=0; i*i<=n; i++)
    {
        wynik = i;
    }
    return wynik;
}


int main()
{
    int n;
    printf("Podaj liczbe n: \n");
    scanf("%d", &n);
    printf("Wynik to: %d", pierwiastkowanie(n));
    return 0;
}
