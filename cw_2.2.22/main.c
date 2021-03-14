#include <stdio.h>
#include <stdlib.h>


int rekurencja2(int n)
{
  int wynik;
  if (n < 0)
    return 0;
  if (n == 0 || n==1)
    return 1;
  wynik = rekurencja2(n-1) + 2 * rekurencja2(n-2) + 3;
    return wynik;
}

int main()
{
    int n;
    printf("Podaj liczbe n: ");
    scanf("%d", &n);
    printf("Wynik wynosi: %d", rekurencja2(n));
    return 0;
}
