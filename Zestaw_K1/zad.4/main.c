#include <stdio.h>
#include <stdlib.h>

int fun(int (*f1)(int a), float (*f2)(float b), int c)
{
    return 2;
}

int foo(int n)
{
    return n;
}

float foo2(float m)
{
    return m*m;
}

int main()
{
    printf("%d\n",fun(foo,foo2,7));
    return 0;
}
