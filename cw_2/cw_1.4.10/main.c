#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, wynik=0;
    printf("Podaj liczbê n: ");
    scanf("%d", &n);
    for(int i=0; i*i<=n; i++)
    {
        wynik = i;
    }
    printf("%d", wynik);
    return 0;
}
