#include <stdio.h>
#include <stdlib.h>

void sortuj(int n, int tab[])
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(tab[j] < tab[j+1])
            {
                int temp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = temp;
            }
        }
    }
}

int* foo(int n, int tab1[], int tab2[])
{
    int* temp = malloc(2*n*sizeof(int));
    for(int i=0; i<n; i++)
    {
        temp[i] = tab1[i];
    }
    for(int i=0; i<n; i++)
    {
        temp[i+n] = tab2[i];
    }
    sortuj(2*n,temp);
    return temp;
}

void wyswietl(int n, int tab[])
{
    for(int i=0; i<n; i++)
    {
        printf("%d ",tab[i]);
    }
    printf("\n");
}

int main()
{
    int tab1[]={4,3,2,-9,8};
    int tab2[]={4,1,2,0,-7};
    int * tab=foo(5, tab1, tab2);
    wyswietl(10, tab);
    return 0;
}
