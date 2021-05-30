#include <stdio.h>
#include <stdlib.h>


void nadaj_wartosc(int n, int m, int **tab)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            tab[i][j] =  i + j;
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


int main()
{
    int n = 3, m = 5;
    int**tab=malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
    {
        *(tab+i)=malloc(m*sizeof(int));
    }
    nadaj_wartosc(n,m,tab);
    wyswietl(n,m,tab);
    return 0;
}
