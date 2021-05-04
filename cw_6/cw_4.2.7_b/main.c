#include <stdio.h>
#include <stdlib.h>


void nadaj_wart(int n, int tab[], int tab1[], int tab2[])
{
    for(int i=0; i<n; i++)
    {
        if(tab[i] >= tab1[i])
            tab2[i] = tab[i];
        else if (tab[i] <= tab1[i])
            tab2[i] = tab1[i];
    }

}

void wyswietl(int n, int tab2[])
{
    for(int i=0; i<n; i++)
    {
        printf("%d", tab2[i]);
    }
    printf("\n");
}


int main()
{
    int tab[3] = {4,5,6};
    int tab1[3] = {1,9,2};
    int tab2[3] = {7,8,9};
    wyswietl(3, tab2);
    nadaj_wart(3,tab, tab1, tab2);
    wyswietl(3,tab2);

    return 0;
}
