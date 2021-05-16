#include <stdio.h>
#include <stdlib.h>

void pomocnicza(int n, int o, int tab[][n])
{
    int temp;
    for(int i=0; i<n/2; i++)
    {
        temp =tab[o][i];
        tab[o][i] = tab[o][n-1-i];
        tab[o][n-1-i] = temp;
    }
}

void odwroc(int n, int m, int tab[][m])
{
    for(int i=0; i<n; i++)
    {
        pomocnicza(n,i,tab);
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
    int n=3, m=3;
    int tab1[3][3]= {{1,2,3}, {4,5,6}, {7,8,9}};
    //int tab2[3][3]= {{2,4,6},{3,5,6},{9,8,7}};
    wyswietl(n,m,tab1);
    printf("Po funkcji \n");
    odwroc(3,3,tab1);
    wyswietl(n,m,tab1);
    return 0;
}
