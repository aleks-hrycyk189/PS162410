#include <stdio.h>
#include <stdlib.h>

int max_srednia(int n, int m, int tab[n][m])
{
    int suma = 0, max;
    double wynik;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            suma += tab[i][j];
        }
        if(((double)suma/m>wynik)||(i==0))
        {
            max = i;
            wynik = (double)suma/m;
        }
    }
    return max;
}



int main()
{
    int n=3, m=3;
    int tab[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
    printf("%d",max_srednia(3,3, tab));
    return 0;
}
