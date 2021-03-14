#include <stdio.h>
#include <stdlib.h>


int funkcja(int n, int m)
{

    if (m == 0)
      return n;
    if (n == 0)
      return m;
    if (n>0 && m>0)
    return funkcja(n-1,m)+ funkcja(n, m-1)+ funkcja(n-1, m-1);
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
