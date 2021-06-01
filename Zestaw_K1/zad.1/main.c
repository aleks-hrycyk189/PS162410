#include <stdio.h>
#include <stdlib.h>

int main()
{
    char napis[20]="Aleksandra"; //tu trzeba wpisac swoje imie, pierwsza litera duza, reszta male
    char z = *(napis+2); //z=101'e'
    int a = napis[3]; // a=107   ,z=101'e'
    z++; // a=107   ,z=102'f'
    ++a; // a=108   ,z=102'f'
    z=(a-=2)+3; // a=106   ,z=109'm'
    a=a^4; // a=110   ,z=109'm'
    return 0;
}
