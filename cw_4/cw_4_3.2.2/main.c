#include <stdio.h>
#include <stdlib.h>

int wskaznik(int *a, int *b)
{
    if (*a < *b)
        return a;
    else
        return b;
}



int main()
{
    int a = 3;
    int b = 5;

    printf("%d \n", &a);
    printf("%d \n", &b);

    printf("%d\n", wskaznik(&a, &b));
    return 0;
}
