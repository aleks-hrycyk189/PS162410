#include <stdio.h>
#include <stdlib.h>

int ** stworz(int n, int m)
{
    int **tab, i;
    tab = malloc(sizeof(int*)*n);
    for(i=0; i<n; i++)
    {
        tab[i] = malloc(sizeof(int)*m);
    }
    return tab;
}


void zwolnij(int n, int m, int **tab)
{
    int i;
    for(i=0; i<n; i++)
    {
        free(tab[i]);
    }
    free(tab);
}


int main()
{
    int **tab1, n=2, m=3;
    tab1 = stworz(n,m);
    zwolnij(n,m,tab1);
    printf("KONIEC");
    return 0;
}
