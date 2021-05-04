#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double sprawdz1(double zm)
{
    return zm;
}

double sprawdz2(double zm)
{
    return zm * zm * zm;
}

int zwroc(double x, double(*sprawdz1)(double a),double(*sprawdz2)(double b))
{
    double n=1;
    for(double i = 1; i <= x; i++ )
    {
        n = i;
    }
    for(int j = 1; j <= n; j++)
    {
        if(fabs(sprawdz1(x) - sprawdz2(x) * sprawdz2(x) * sprawdz2(x) > 0.0001 ))
            return -1;
    }
    if(x<1)
        return -1;
    return 1;
}

int main()
{
    printf("%d \n", zwroc(3, sprawdz1, sprawdz2));
    printf("%d \n", zwroc(-6, sprawdz1, sprawdz2));
    return 0;
}
