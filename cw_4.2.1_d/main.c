#include <stdio.h>
#include <stdlib.h>


void nadaj_wart(int n, int tab[])
{
   for(int i=0; i<n; i++)
    {
        if(tab[i]<0)
            tab[i] = -(tab[i]);
        else if(tab[i]>=0)
            tab[i] = tab[i];
    }

}

void wyswietl(int n, int tab[])
{
    for(int i=0; i<n; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
}


int main()
{
    int tab[5] = {-2,4,-6,8,-10};

    nadaj_wart(5,tab);
    wyswietl(5,tab);

    return 0;
}
