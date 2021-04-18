#include <stdio.h>
#include <stdlib.h>

void sortowanie(int n, int tab[])
{
    int temp,wyn;
    for(int i = 0; i < n-1 ; i++)
    {
        for(int j=0; j< n-1-i; j++)
        {
            if (tab[j] < tab[j+1])
            {
                temp = tab[j+1];
                tab[j+1] = tab[j];
                tab[j] = temp;
            }
        }
    }
}

void wyswietl(int n, int tab[])
{
    for(int i=0; i<n; i++)
    {
        printf("%d", tab[i]);
    }
    printf("\n");
}

int main()
{
    int tab[3] = {6,5,3};
    int tab1[10] = {2,1,3,7,6,5,4,3,2,1};
    sortowanie(3,tab);
    wyswietl(3,tab);
    sortowanie(10,tab1);
    wyswietl(10,tab1);


    return 0;
}
