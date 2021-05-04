#include <stdio.h>
#include <stdlib.h>


int sprawdz_dlugosc(char zadanie[])
{
    int pom = 0;
   for(int i=0; zadanie[i] != 0; i++)
    {
        pom ++;
    }
    return pom;
}

int sprawdz_dlugosc2(char napis[])
{
    int i=0;
    while(napis[i]!= 0)
        i++;
    return i;
}

int sprawdz_dlugosc3(char *napis2)
{
    int pom = 0;
    while(*(napis2 ++))
    {
        pom++;
    }
    return pom;
}
int main()
{
    char zadanie[] = "Ola ma kota";
    printf("%d \n", sprawdz_dlugosc(zadanie));
    printf("%d \n", sprawdz_dlugosc2(zadanie));
    printf("%d", sprawdz_dlugosc3(zadanie));
    return 0;
}
