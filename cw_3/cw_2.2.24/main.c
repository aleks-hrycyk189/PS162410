#include <stdio.h>
#include <stdlib.h>

int rekurencja(int n)
{
    int suma=0;
    if (n==0 || n==1)
    {
        return 1;
    }
    else if(n>1)
        for(int i=1; i<n; i++)
    {
        suma += rekurencja(i-1) + rekurencja(i-1);
    }
     return suma;
}

int main()
{
    int n;
    printf("Podaj liczbe n: ");
    scanf("%d", &n);
    printf("Wynik wynosi: %d", rekurencja(n));
    return 0;
}
