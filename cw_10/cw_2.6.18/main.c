#include <stdio.h>
#include <stdlib.h>

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
    int tab[3][3]= {{1,2,3}, {4,5,6}, {7,8,9}};
    wyswietl(n,m,tab);
    return 0;
}
