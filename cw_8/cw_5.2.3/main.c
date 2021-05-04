#include <stdio.h>
#include <stdlib.h>


int sprawdz_dlugosc(char napis[])
{
    int i=0;
    while(napis[i]!=0)
        i++;
    return i;
}

void porownaj(char zdanie[], char zdanie1[])
{
    if(sprawdz_dlugosc(zdanie)== sprawdz_dlugosc(zdanie1))
        printf("Napisy sa rowne \n");
    else
        printf("Napisy nie sa rowne \n");
}

int main()
{
    char zdanie[] = "Ola ma kota";
    char zdanie1[] = "Ola ma kot";
    char zdanie2[] = "Ala ma kota";
    porownaj(zdanie, zdanie1);
    porownaj(zdanie, zdanie2);
    return 0;
}
