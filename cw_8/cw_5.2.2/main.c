#include <stdio.h>
#include <stdlib.h>

int sprawdz_dlugosc(char napis[])
{
    int i=0;
    while(napis[i]!=0)
        i++;
    return i;
}

int sprawdz_w(wchar_t napis2[])
{
    int i =0;
    while(napis2[i]!=0)
        i++;
    return i;
}



int main()
{
    char zadanie [] = "Ola ma kota";
    printf("%d \n", sprawdz_dlugosc(zadanie));

    wchar_t napis2[]= L"Oliiii";
    printf("%d", sprawdz_w(napis2));
    return 0;
}
