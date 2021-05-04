#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    printf("Podaj liczby : ");
    scanf("%d\n%d\n%d\n%d", &a, &b, &c, &d);
    int x=0;
    for(int i=0; a*i*i+b*i+c>d; i++)
    {
        x=i;
    }
    printf("%d", x+1);
    return 0;
}
