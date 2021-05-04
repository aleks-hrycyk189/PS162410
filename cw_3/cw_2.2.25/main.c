#include <stdio.h>
#include <stdlib.h>


int rekurencja1(int n)
{
  int wynik, wynik2;
    if (n < 0)
      return 0;
    if (n == 0 || n ==1)
      return 1;
    if(n % 2 == 0)
    {
      wynik = rekurencja1(n-1) + n;
      return wynik;
    }
    else if (n % 2 == 1)
    {
      wynik = n * (rekurencja1(n-1));
      return wynik;
    }
}

int main()
{
    int n;
    printf("Podaj liczbe n: ");
    scanf("%d", &n);
    printf("Wynik wynosi: %d", rekurencja1(n));
    return 0;
}
