#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b, wynik;
    int w1;
    printf("Wybierz jakie dzialanie chcesz wykonac:\n 1. dodawanie \n 2. odejmowanie \n 3. mnozenie \n 4. dzielenie \n");
    scanf("%d",&w1);
    printf("Podaj liczby na ktorych chcesz wykonac dzialanie: \n");
    printf("Podaj liczbe nr 1: \n");
    scanf("%lf", &a);
    printf("Podaj liczbe nr 2: \n");
    scanf("%lf", &b);

    switch(w1){
        case 1:
            wynik = a+b;
            break;
        case 2:
            wynik= a-b;
            break;
        case 3:
            wynik= a*b;
            break;
        case 4:
            wynik= a/b;
            break;
        default:
            printf("Brak opcji");}

    printf("Wynik twojego dzialania to: %lf\n", wynik);


    return 0;
}
