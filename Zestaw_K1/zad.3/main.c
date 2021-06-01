#include <stdio.h>
#include <stdlib.h>

int* foo(int ** tab,int n,int m)
{
    if(m<3)
        return NULL;
    return &tab[n-1][2]; //*(tab+n-1)+2
}

void nadaj_wartosc2(int n, int m, int **tab, int x)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            tab[i][j] = x + i + j;
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

    int n=3, m=3;
    int**tab=malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
    {
        *(tab+i)=malloc(m*sizeof(int));
    }
    nadaj_wartosc2(n,m,tab,2);
    wyswietl(n,m,tab);

    foo(tab,n,m);


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("[%d,%d]=%d,%p\n",i,j,tab[i][j],&tab[i][j]);
        }
    }
    printf("%p\n",foo(tab,n,m));
    return 0;
}
