#include <stdio.h>
#include <stdlib.h>


int silnia (int n)
{
  int wynik;
  if (n < 0)
    return 0;
  if (n == 0 || n == 1)
    return 1;
  wynik = n * silnia(n - 1);
    return wynik;
}

int main()
{
    int n;
    printf("Podaj liczbe n: ");
    scanf("%d", &n);
    printf("Silnia wynosi: %d", silnia(n));
    return 0;
}
