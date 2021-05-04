#include <stdio.h>
#include <stdlib.h>
int licznik = 0;

void liczba_wywolan()
{
    licznik++;
    printf("Funkcje wywolano %d razy", licznik);
}

int main()
{
    liczba_wywolan();
    printf("\n");
    liczba_wywolan();
    return 0;
}
