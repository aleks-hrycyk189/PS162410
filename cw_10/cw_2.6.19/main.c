#include <stdio.h>
#include <stdlib.h>

void przepisz(int n, int m, int tab1[n][m], int tab2[n][m])
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            tab1[i][j]= tab2[i][j];
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
    int n=3, m=3;
    int tab1[3][3]= {{1,2,3}, {4,5,6}, {7,8,9}};
    int tab2[3][3]= {{2,4,6},{3,5,6},{9,8,7}};
    wyswietl(n,m,tab1);
    printf("\n");
    wyswietl(n,m,tab2);
    przepisz(3,3,tab1, tab2);
    printf("Po funkcji \n");
    wyswietl(n,m,tab1);
    printf("\n");
    wyswietl(n,m,tab2);
    return 0;
}
