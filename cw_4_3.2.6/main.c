#include <stdio.h>
#include <stdlib.h>

void zadanie(int n, int *w)
{
    *w = n;
}


int main()
{
    int a = 3, b = 4;
    printf("Dane dla zmiennej a: wartosc = %d oraz adres %p\n", a,&a);
	printf("Dane dla zmiennej b: wartosc = %d oraz adres %p\n", b,&b);
    zadanie(a, &b);
	printf("Dane dla zmiennej a: wartosc = %d oraz adres %p\n", a,&a);
	printf("Dane dla zmiennej b: wartosc = %d oraz adres %p\n", b,&b);
    return 0;
}
