#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m, mnozenie=1;
    printf("Podaj liczbê n: ");
    scanf("%d", &n);
    printf("Podaj liczbe m, ktora jest wieksza od n: ");
    scanf("%d", &m);
    if(n<m)
    {
        for(int i=n; i<= m; i++)
            mnozenie *= i;
            printf("%d",mnozenie);
    }
    else
        printf("Nie spelnione warunki!");

    return 0;
}
