#include <stdio.h>
#include <stdlib.h>


void odwroc(int n,int tab[])
{
    int temp;
    for(int i=0; i<n/2; i++ )
    {
        temp = tab[i];
        tab[i] = tab[n-1-i];
        tab[n-1-i] = temp;
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
    int tab[3] = {4,5,6};
    int tab1[10] = {10,9,8,7,6,5,4,3,2,1};
    odwroc(3,tab);
    wyswietl(3,tab);
    odwroc(10,tab1);
    wyswietl(10,tab1);


    return 0;
}
