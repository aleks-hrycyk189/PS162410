#include <stdio.h>
#include <stdlib.h>

int dlugosc(char *napis)
{
    int i=0;
    while(napis[i]!=0)
    {
        i++;
    }
    return i;
}


void usun(char *napis, int n)
{
    for(int i=0; i<n; i++)
    {
        if (i%2==1)
        {
            napis[i]=' ';
        }
    }
}


int main()
{
    char napis1[]="Parasolka";
    int dlu = dlugosc(napis1);
    printf("%d\n",dlu);
    usun(napis1,dlu);
    printf("%s",napis1);
    return 0;
}
