#include <stdio.h>
#include <stdlib.h>

double *f1(int n)
{
    return malloc(n * sizeof(double));
}


int main()
{
    int n;
    printf("%p",f1(4));
    return 0;
}
