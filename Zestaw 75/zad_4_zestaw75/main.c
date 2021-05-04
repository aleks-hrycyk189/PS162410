#include <stdio.h>
#include <stdlib.h>

int f1(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 2;
    int wynik;
    if(n % 2 == 0)
    {
        wynik = f1(n-2) + n;
        return wynik;
    }
    if(n % 2 == 1)
    {
        wynik = f1(n-2) * n;
        return wynik;
    }
}


int main()
{
    printf("%d", f1(2));
    printf("\n%d", f1(3));
    printf("\n%d", f1(4));
    printf("\n%d", f1(5));
    printf("\n%d", f1(6));
    printf("\n%d", f1(7));
    return 0;
}
