#include <stdio.h>
#include <stdlib.h>


void przesuwanie(int n, int tab[])
{
    int temp = tab[0];
    for(int i=0; i < n; i++)
    {
        tab[i] = tab[i+1];
        tab[n] = temp;

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
    int tab1[5] = {10,9,8,7,6};
    przesuwanie(3,tab);
    wyswietl(3,tab);
    przesuwanie(5,tab1);
    wyswietl(5,tab1);


    return 0;
}
