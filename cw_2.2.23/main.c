#include <stdio.h>
#include <stdlib.h>

int ciag_Fib(int n)
{
    int wynik;
    if (n==0)
        return 0;
    if (n==1)
        return 1;
    if(n>1)
      wynik = ciag_Fib(n-2)+ciag_Fib(n-1);

    return wynik;
}

int main()
{
    int n;
    printf("Podaj liczbe n: ");
    scanf("%d", &n);
    printf("Wynik wynosi: %d", ciag_Fib(n));
    return 0;
}
