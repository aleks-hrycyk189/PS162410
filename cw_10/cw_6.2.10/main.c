#include <stdio.h>
#include <stdlib.h>

void zeruj(int n, int m, int tab[n][m])
{
    for (int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            tab[i][j]= 0;
        }
    }
}

void wyswietl(int n, int m, int tab[n][m])
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
    int n=2, m=3;
    int tab[n][m];
    zeruj(n,m, tab);
    wyswietl(n,m,tab);
    return 0;
}
