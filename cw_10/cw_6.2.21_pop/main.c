#include <stdio.h>
#include <stdlib.h>

void nadaj_wartosc(int n, int m, int **tab, int x)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            tab[i][j] = x + i + j;
        }
    }
}
void pomocnicza(int n, int o, int **tab)
{
    int temp;
    for(int i=0; i<n/2; i++)
    {
        temp =tab[o][i];
        tab[o][i] = tab[o][n-1-i];
        tab[o][n-1-i] = temp;
    }
}

void odwroc(int n, int m, int **tab)
{
    for(int i=0; i<n; i++)
    {
        pomocnicza(n,i,tab);
    }
}

void wyswietl(int n, int m, int **tab)
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
    int n = 4, m = 4;
    int**tab1=malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
    {
        *(tab1+i)=malloc(m*sizeof(int));
    }
    nadaj_wartosc(n,m,tab1,2);
    wyswietl(n,m,tab1);
    printf("Po funkcji \n");
    odwroc(n,m,tab1);
    wyswietl(n,m,tab1);
    return 0;
}
