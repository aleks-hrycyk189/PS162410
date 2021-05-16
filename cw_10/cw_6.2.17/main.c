#include <stdio.h>
#include <stdlib.h>

int max_srednia(int n, int m, int tab[n][m])
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
    int n=2, m=3;
    int tab[2][3]= {{1,2,3},{4,5,6}};
    printf("%d",max_srednia(2,3, tab));
    return 0;
}
