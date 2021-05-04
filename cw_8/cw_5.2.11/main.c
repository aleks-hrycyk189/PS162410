#include <stdio.h>
#include <stdlib.h>

void wytnij(char *napis1, char *napis2)
{
    int i, j;
    int wyst[256]={};
    for(i=0; napis2[i]!=0;i++)
        wyst[napis2[i]]=1;
    for(i=0, j=0; napis1[i]!=0;i++)
        if(wyst[napis1[i]]==0)
    {
        if(j<i)
            napis1[j]= napis1[i];
        j++;
    }
    napis1[j]=0;
}


int main()
{
    char napis1 []= "aleksandra";
    char napis2[] = "patryk";
    wytnij(napis1, napis2);
    printf("%s", napis1);
    return 0;
}
