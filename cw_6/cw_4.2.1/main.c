#include <stdio.h>
#include <stdlib.h>


void nadaj_zero(int n, int tab[])
{
    for(int i=0; i<n; i++)
    {
        tab[i] = 0;
    }

}

void wyswietl(int n, int tab[])
{
    for(int i=0; i<n; i++)
    {
        printf("%d", tab[i]);
    }
    printf("\n");
}


int main()
{
    int tab[3] = {4,5,6};
    wyswietl(3,tab);
    nadaj_zero(3,tab);
    wyswietl(3,tab);

    return 0;
}
