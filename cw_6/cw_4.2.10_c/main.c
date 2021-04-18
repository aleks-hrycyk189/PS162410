#include <stdio.h>
#include <stdlib.h>


int max(int n, int tab[])
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

    int tab[] = {6,5,4};
    int tab1[] = {1,3,-9,6,7,89,-980,4,2};
    int tab3[] = {-9,-8,-6,-1,2,-3};
    printf("Maxymalna wartosc jest w indeksie: %d \n",max(3,tab));
    printf("Maxymalna wartosc jest w indeksie:: %d \n ",max(9,tab1));
    printf("Maxymalna wartosc jest w indeksie:: %d \n",max(6,tab3));

    return 0;
}
