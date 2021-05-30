#include <stdio.h>
#include <stdlib.h>

enum zwierzak {rybka, chomik, krolik, szynszyl, pies, kot};

int main()
{
    enum zwierzak zm;
    zm=kot;
    printf("%d\n",zm);
    return 0;
}
