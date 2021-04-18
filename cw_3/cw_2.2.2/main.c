#include <stdio.h>
#include <stdlib.h>

int silnia(int a)
{
    int wynik;
    if(a < 2)
        return 1;
    else if(a >= 2)
        wynik = a * silnia(a-1);
        return wynik;


}


int main()
{
    int a;
    printf("Podaj liczbe, dla ktorej chcesz policzyc silnie: ");
    scanf("%d", &a);
    printf("Wynik wynosi : %d", silnia(a));
    return 0;
}
