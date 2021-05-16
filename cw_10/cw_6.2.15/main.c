#include <stdio.h>
#include <stdlib.h>

void zeruj(int n, int m, int o, int tab[n][m][o])
{
    for (int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            for(int k=0; k<o; k++)
            {
                tab[i][j][k]= 0;
            }
        }
    }
}


int suma(int n, int m, int o, int tab[2][100][100])
{
    int suma=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            for(int k=0; k<o; k++)
            {
                suma += tab[i][j][k];
            }
        }
    }
    return suma;
}


int main()
{
    int n=2, m=100, o=100;
    int tab[2][100][100];
    //zeruj(2,100,100,tab);
    printf("%d", suma(n,m,o,tab));
    return 0;
}
