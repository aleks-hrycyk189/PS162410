#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    printf("Podaj liczbê n: ");
    scanf("%d", &n);
    printf("Podaj liczbe m: ");
    scanf("%d", &m);

    while(n != m)
    {
        if (n>m)
        {
            n=n-m;
        }
        else if (m>n)
        {
            m=m-n;
        }
    }
        printf("NWD = %d",m);
    return 0;
}
