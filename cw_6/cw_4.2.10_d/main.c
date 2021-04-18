#include <stdio.h>
#include <stdlib.h>


int min(int n, int tab[])
{
    int min = tab[0];
    for(int i=0; i<n; i++)
    {
        if(tab[i] < tab[min])
        {
            min = i;
        }
    }
    return min;
}


int main()
{

    int tab[] = {1,5,2};
    int tab1[] = {1,3,-9,6,7,-1000,-980,4,2};
    int tab3[] = {-9,-8,-6,-1,2,-3};
    printf("Min wartosc jest w indeksie: %d \n",min(3,tab));
    printf("Min wartosc jest w indeksie:: %d \n ",min(9,tab1));
    printf("Min wartosc jest w indeksie:: %d \n",min(6,tab3));

    return 0;
}
