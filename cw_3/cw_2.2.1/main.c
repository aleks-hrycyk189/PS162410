#include <stdio.h>
#include <stdlib.h>

int wartBezw(int a)
{
    if(a>=0)
        return a;
    else
    {
        a = a* (-1);
        return a;
    }
}

int main()
{
    int a;
    printf("Podaj liczbe: ");
    scanf("%d", &a);

    printf("Wartosc bezwzgledna z liczby %d to %d", a,wartBezw(a));

    return 0;
}
