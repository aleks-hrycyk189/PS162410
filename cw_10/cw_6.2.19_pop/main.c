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
void przepisz(int n, int m, int **tab1, int **tab2)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            tab1[i][j]= tab2[i][j];
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
    int**tab1=malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
    {
        *(tab1+i)=malloc(m*sizeof(int));
    }
    nadaj_wartosc(n,m,tab1,4);
    wyswietl(n,m,tab1);
    printf("\n");
    int**tab2=malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
    {
        *(tab2+i)=malloc(m*sizeof(int));
    }
    nadaj_wartosc(n,m,tab2,5);
    wyswietl(n,m,tab2);
    printf("\n");
    printf("Po funkcji \n");
    przepisz(n,m,tab1, tab2);
    wyswietl(n,m,tab1);
    printf("\n");
    wyswietl(n,m,tab2);
    return 0;
}
