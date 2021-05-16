#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void przepisz(char *napis1, char *napis2, int n)
{
    int i;
    if(strlen(napis1)>n)
    {
        for(i=0; i<=n; i++)
        {
            napis2[i]=napis1[i];
        }
    }

    if (strlen(napis1)<=n)
    {
        for(i=0; napis1[i]!=0; i++)
        {
            napis2[i]=napis1[i];
        }
         napis2[i]=0;
    }

}

int main()
{
    char n1[] = "Ale";
    char n11[] = "Aleksandra";
    char n2[] = "Hrycyk";
    //printf("%d \n", strlen(n1));
    przepisz(n1,n2,3);
    printf("%s\n",n1);
    printf("%s\n",n2);

    przepisz(n11,n2,5);
    printf("%s\n",n11);
    printf("%s\n",n2);
    return 0;
}
