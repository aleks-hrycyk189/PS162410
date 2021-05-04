#include <stdio.h>
#include <stdlib.h>

int main()

{
    double liczba,wynik;
    printf("Podaj liczbe: \n");
    scanf("%lf", &liczba);
    printf("%lf", fabs(liczba));
    //wynik=(float)abs(liczba);
    //printf("%f",wynik);
    return 0;
}
