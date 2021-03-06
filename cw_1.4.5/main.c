#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, mnozenie, suma;
    printf("Podaj liczbe:\n");
    scanf("%d", &n);
    for(int i=0; i<=n; i++)
        suma += (i*i);
        printf("%d\n", suma);


    return 0;
}
