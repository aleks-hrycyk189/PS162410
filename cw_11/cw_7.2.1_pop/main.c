#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct trojkat
{
    double a,b,c;
};

double pole(struct trojkat t)
{
    double obwod;
    obwod = t.a + t.b + t.c;
    return obwod;
}
int main()
{
    struct trojkat t1;
    t1.a=3;
    t1.b=4;
    t1.c=5;
    printf("Pole: %f", pole(t1));
    return 0;
}
