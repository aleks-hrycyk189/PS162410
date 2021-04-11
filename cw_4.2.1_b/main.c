#include <stdio.h>
#include <stdlib.h>


void nadaj(int n, int tab[])
{
    for(int i=0; i<n; i++)
    {
        tab[i] = i;
    }

}

void wyswietl(int n, int tab[])
{
    for(int i=0; i<n; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
}


int main()
{
    int tab[5];

    nadaj(5,tab);
    wyswietl(5,tab);

    return 0;
}
