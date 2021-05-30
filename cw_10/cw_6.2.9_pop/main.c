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

void wstaw_zero(int **tab, int n, int m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            tab[i][j] = 0;
        }
    }
}

void wyswietl(int **tab, int n, int m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d", tab[i][j]);
        }
        printf("\n");
    }
}


int main()
{
    int **tab, n=2, m=3;
    tab =stworz(n,m);
    wstaw_zero(tab, n, m);
    wyswietl(tab, n, m);
    return 0;
}
