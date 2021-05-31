#include <stdio.h>
#include <stdlib.h>

int main()
{
    char napis[20]="ALEKSANDRA"; //tu trzeba wpisac swoje imie, wszystkie litery duze
    char z = *(napis+2); //z=69'E'
    int a = napis[3]; // a= 75   ,z= 69'E'
    z++; // a=75   ,z=70'F'
    ++a; // a= 76  ,z=70'F'
    z=(a-=2)+3; // a= 74  ,z= 77'M'
    a=a^4; // a= 78   ,z= 77'M'
    return 0;
}
