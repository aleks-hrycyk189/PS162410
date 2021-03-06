#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,k;
    printf("Podaj trzy liczby: gdzie n jest wieksze od m i mniejsze od k: \n");
    scanf("%d\n %d\n %d", &n, &m, &k);
    if(n>m && n<k)
    {
        for(int i=n; (i>m) && (i<k); i+=n)
        printf("%d\n", i);
    }
   else
    printf("Zle dane");
    return 0;
}
