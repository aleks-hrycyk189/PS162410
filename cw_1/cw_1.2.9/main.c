#include <stdio.h>
#include <stdlib.h>

int main()

{
    double liczba,wynik;
    printf("Podaj liczbe: \n");
    scanf("%lf", &liczba);
    wynik=(float)sqrt(liczba);
    printf("%f",wynik);
    //print("%f",sqrt(liczba));
    return 0;
}
