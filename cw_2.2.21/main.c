#include <stdio.h>
#include <stdlib.h>


int rekurencja(int n)
{
  int wynik;
  if (n < 0)
    return 0;
  if (n == 0)
    return 1;
  wynik = 2 * rekurencja(n-1) +5;
    return wynik;
}

int main()
{
    int n;
    printf("Podaj liczbe n: ");
    scanf("%d", &n);
    printf("Wynik wynosi: %d", rekurencja(n));
    return 0;
}
