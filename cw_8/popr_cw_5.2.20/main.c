#include <stdio.h>
#include <stdlib.h>

void foo(int g, int m, int sek)
{
    char *napis = printf("%02d:%02d:%02d",g,m,sek);
}


int main()
{
    int g=15, m=12, sek=45;
    foo(g,m,sek);
    return 0;
}
