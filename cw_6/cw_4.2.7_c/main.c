#include <stdio.h>
#include <stdlib.h>

void nadaj_wart(int n, int tab1[], int tab2[], int tab3[])
{
    int temp1[3], temp2[3], temp3[3];
    for(int i=0; i<n; i++)
    {
        temp1[i] = tab1[i];
        temp2[i] = tab2[i];
        temp3[i] = tab3[i];
    }

    for(int i=0; i<n; i++)
    {
        tab2[i] = temp1[i];
        tab3[i] = temp2[i];
        tab1[i] = temp3[i];
    }
}

void wyswietl(int n, int tab1[], int tab2[], int tab3[])
{
    for(int i=0; i<n; i++)
    {
        printf("%d", tab1[i]);
    }
    printf("\n");
     for(int i=0; i<n; i++)
    {
        printf("%d", tab2[i]);
    }
    printf("\n");
     for(int i=0; i<n; i++)
    {
        printf("%d", tab3[i]);
    }
    printf("\n");
}


int main()
{
    int tab1[3] = {4,5,6};
    int tab2[3] = {1,9,2};
    int tab3[3] = {7,8,9};
    wyswietl(3, tab1, tab2, tab3);
    nadaj_wart(3, tab1, tab2, tab3);
    printf("Po zmianie \n");
    wyswietl(3, tab1, tab2, tab3);

    return 0;
}
