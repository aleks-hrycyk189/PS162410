#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, mnozenie=1;
    printf("Podaj liczbe wieksza od 2:\n");
    scanf("%d", &n);
    if((n>2) && (n%2==0))
    {
        for(int i=2; i<= n; i+=2)
            mnozenie *= i;
            printf("%d",mnozenie);
    }
    else if ((n>2) && (n%2==1))
    {
        n=n-1;
        for(int i=2; i<=n; i=i+2)
        {
            mnozenie *= i;
            printf("%d",mnozenie);
        }

    }

    return 0;
}
