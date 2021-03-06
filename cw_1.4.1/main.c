#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n,m;
    printf("Podaj dwie liczby:\n");
    scanf("%u" "%u", &n, &m);
    for(int i=n; i<m; i+=n)
        printf("%u\n" , i);
    return 0;
}
