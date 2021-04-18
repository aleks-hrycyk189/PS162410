#include <stdio.h>
#include <stdlib.h>

int main()

{
    float liczba;
    printf("Podaj liczbe: \n");
    scanf("%f", &liczba);
    printf("%.1e",liczba);
    return 0;
}
