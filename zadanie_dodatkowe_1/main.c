#include <stdio.h>
#include <stdlib.h>

int main()
{
    //wpisz wartosci zmiennych po wykonaniu danej linijki kodu
    int a = 162410; //tu wpisz swoj numer indeksu
    int b=a%12;
    int c=b%7;
    int d= (b+=4)-(c*=2); // b= 6 , c= 4 , d= 2
    c=(d^=2); // b= 6 , c=0  , d=0
    d=(b/=4)*(c-=3); // b=1  , c=-3  , d=-3
    return 0;
}
