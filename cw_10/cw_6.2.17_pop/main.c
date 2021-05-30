#include <stdio.h>
#include <stdlib.h>

void nadaj_wartosc(int n, int m, int **tab, int x)
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
int max_srednia(int n, int m, int **tab)
{
    int suma = 0;
    double wynik;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            suma += tab[i][j];
        }
        if(((double)suma/m>wynik)||(i==0))
        {
            wynik = (double)suma/m;
        }
    }
    return wynik;
}



int main()
{
    int n = 3, m = 5, x=5;
    int**tab=malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
    {
        *(tab+i)=malloc(m*sizeof(int));
    }
    nadaj_wartosc(n,m,tab,x);
    wyswietl(n,m,tab);
    printf("%d",max_srednia(n,m, tab));
    return 0;
}
