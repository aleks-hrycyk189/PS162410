#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, silnia=1;
    printf("Podaj liczbe:\n");
    scanf("%d", &n);
    for(int i=2; i<=n; i++)
        silnia *= i;
        printf("%d\n", silnia);
    return 0;
}
