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

int suma(int n, int m, int tab[2][4])
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
    int n=2, m=4;
    int tab[2][4] = {{1,2,3,4},{5,6,7,8}};
    wyswietl(n,m,tab);
    printf("%d", suma(n,m,tab));
    return 0;
}
