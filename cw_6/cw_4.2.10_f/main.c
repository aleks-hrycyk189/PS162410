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
int max_ind(int n, int tab[])
{
    int max = tab[0];
    for(int i=0; i<n; i++)
    {
        if(tab[i] > tab[max])
        {
            max = i;
        }
    }
    return max;
}
int main()
{

    int tab[] = {4,5,6};
    int tab1[] = {1,3,-9,6,7,89,-980,4,6};
    nadaj_wart(3,tab);
    nadaj_wart(9,tab1);
    printf("Maxymalna wartosc bezwzgledna jest w indeksie: %d \n", max_ind(3,tab));
    printf("Maxymalna wartosc bezwzgledna  jest w indeksie: %d ", max_ind(9,tab1));
    return 0;
}
