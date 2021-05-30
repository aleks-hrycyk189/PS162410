#include <stdio.h>
#include <stdlib.h>

void zamien(int n, int **tab)
{
    int temp[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            temp[j][i] = tab[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            tab[i][j] = temp[i][j];
        }
    }
}

void wyswietl(int n, int **tab)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
}


int main()
{
    int n = 3;
    int**tab1=malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
    {
        *(tab1+i)=malloc(n*sizeof(int));
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            tab1[i][j]=i+j+i*j+3*i;
        }
    }
    wyswietl(n,tab1);
    zamien(n,tab1);
    wyswietl(n,tab1);
    return 0;
}
