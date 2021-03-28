#include <stdio.h>
#include <stdlib.h>

void wskaznik(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}



int main()
{
    int a = 3, b = 5;
    printf("Stare wartosci: %d %d\n",a,b);
    wskaznik(&a,&b);
    printf("Nowe wartosci : %d %d\n",a,b);
    return 0;
}
