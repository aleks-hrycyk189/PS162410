#include <stdio.h>
#include <stdlib.h>


int funkcja(int n, int m)
{

    if (m == 0)
      return n;
    if (n >= m && m > 0)
    return n - m + funkcja(n-1, m) + funkcja(n, m-1);
}

int main()
{
    int n,m;
    printf("Podaj liczbe n: ");
    scanf("%d", &n);
    printf("Podaj liczbe m: ");
    scanf("%d", &m);
    printf("Wynik wynosi: %d", funkcja(n,m));
    return 0;
}
