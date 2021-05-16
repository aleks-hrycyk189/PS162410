#include <stdio.h>
#include <stdlib.h>

int **stworz(int n)
{
    int **tab;
    tab = malloc(sizeof(int*)*n);
    for(int i=0; i<n; i++)
    {
        tab[i] = malloc(sizeof(int)*(i+1));
    }
    return tab;
}

int main()
{
    int ** tab, n=3;
    tab = stworz(n);

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            *(*(tab+i)+j)=i*j;
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("[%d,%d]=%d,%p\n",i,j,*(*(tab+i)+j),*(tab+i)+j);
        }
    }
    return 0;
}
