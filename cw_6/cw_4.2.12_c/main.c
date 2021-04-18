#include <stdio.h>
#include <stdlib.h>

void przesuwanie(int n, int tab[])
{
    int pom = tab[n-1];
    for(int i= n-2; i >= 0; i--)
    {
        tab[i+1] = tab[i];

    }
        tab[0] = pom;

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
    int tab1[5] = {7,4,5,1,6};
    wyswietl(3,tab);
    przesuwanie(3,tab);
    wyswietl(3,tab);
    wyswietl(5,tab1);
    przesuwanie(5,tab1);
    wyswietl(5,tab1);


    return 0;
}
