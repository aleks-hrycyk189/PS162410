#include <stdio.h>
#include <stdlib.h>

void przepisz(char *napis1, char *napis2, int n)
{
    int i;
    for(i=0; i<=n; i++)
    {
        napis2[i]=napis1[i];
    }
}

int main()
{
    char n1[] = "Aleksandra";
    char n2[] = "Hrycyk";
    przepisz(n1,n2,4);
    printf("%s\n",n1);
    printf("%s\n",n2);
    return 0;
}
