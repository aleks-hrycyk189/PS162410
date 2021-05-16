#include <stdio.h>
#include <stdlib.h>

void zamien(int n, int m, int tab[n][m], int tab2[m][n])
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            tab2[i][j] = tab[j][i];
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
    int n = 2, m = 4;
    int tab[2][4] = {{1,2,3,4},{5,6,7,8}};
    int tab2[m][n];
    wyswietl(n,m,tab);
    printf("Po funkcji \n");
    zamien(n,m, tab, tab2);
    wyswietl(m,n,tab2);
    return 0;
}
