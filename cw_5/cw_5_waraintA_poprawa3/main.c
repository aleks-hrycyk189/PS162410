
#include <stdio.h>
#include <stdlib.h>

int rekurencja(int n)
{
    if (n == 0)
        return 2;
    if (n == 1)
        return 2;
    if (n > 0 && n % 2 ==0)
        return rekurencja((n/2)-1) + (n/2);
    if (n >0 && n % 2 ==1 )
        return 2 * rekurencja(n - 1) - n;

}

int main()
{
    int n;
    printf("Podaj wartosc liczby n: ");
    scanf("%d",&n);

    if(n >= 0)
    {
        printf("Wartosc wynosi: %d", rekurencja(n));
    }
    else
        printf("Liczba n powinna byc wieksza od 0");

    return 0;
}
