#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,m,mnoznik;
    printf("Podaj dwie liczby:\n");
    scanf("%d" "%d", &a, &m);
    for(int i=0; i<m; i++)
    {
        mnoznik= a*(i+1);
        printf("%d\n", mnoznik);
    }
    return 0;
}
