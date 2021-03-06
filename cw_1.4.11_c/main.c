#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Podaj liczby : ");
    scanf("%d\n%d\n%d", &a, &b, &c);
    int x=0;
    for(int i=0; 5*i*i+a*i+b<=c; i++)
    {
        x=i;
    }
    printf("%d", x);
    return 0;
}
