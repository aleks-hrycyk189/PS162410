#include <stdio.h>
#include <stdlib.h>

/*int ilosc_elem(int tabb[])
{
    int ilosc_elementow = sizeof(tabb) / sizeof(int);
    return ilosc_elementow;
}
*/

int max(int n, int tab[])
{
    int max = tab[0];
    for(int i=0; i<n; i++)
    {
        if(tab[i]>max)
        {
            max = tab[i];
        }
    }
    return max;
}


int main()
{

    int tab[] = {4,5,6};
    int tab1[] = {1,3,-9,6,7,89,-980,4,6};
    printf("Maxymalna wartosc to: %d \n",max(3,tab));
    printf("Maxymalna wartosc to: %d ",max(9,tab1));

    //int tab2[]= {4,3,6,5,2};
    //int ilosc_elementow2 = sizeof(tab2) / sizeof(int);
    //printf("%d", ilosc_elementow2);
    return 0;
}
