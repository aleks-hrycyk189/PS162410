#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Podaj liczby:");
    scanf("%d %d",&a, &b);
    if(abs(a)>abs(b))
    {
        printf("%d",a);
    }
    else if(abs(a)<abs(b))
    {
        printf ("%d",b);
    }
    else
    {
        printf("%d",a);
    }
    return 0;
}
