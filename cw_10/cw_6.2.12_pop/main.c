#include <stdio.h>
#include <stdlib.h>

void nadaj_wartosc(int n, int m, int **tab, int x)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            tab[i][j] = x;
        }
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

int suma(int n, int m, int **tab)
{
    int suma=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            suma += tab[i][j];
        }
    }
    return suma;
}


int main()
{

    int n = 2, m = 4, x=5;
    int**tab=malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
    {
        *(tab+i)=malloc(m*sizeof(int));
    }
    nadaj_wartosc(n,m,tab,x);
    wyswietl(n,m,tab);
    printf("%d", suma(n,m,tab));
    return 0;
}
