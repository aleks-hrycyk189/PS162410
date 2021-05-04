#include <stdio.h>
#include <stdlib.h>

void wyczysc(char zadanie[])
{
    *zadanie = 0;
}

int main()
{
    char zadanie[] = "Ola ma kota";
    wyczysc(zadanie);
    printf("%s", zadanie);
    return 0;
}
