#include <stdio.h>
#include <stdlib.h>

void zadanie_15(const int *a, int *b)
{
   *b = *a;
}

int main()
{
    int a = 4, b = 7;
    zadanie_15(&a, &b);
	printf("Dane dla zmiennej a: %d \n", a);
	printf("Dane dla zmiennej b: %d ", b);
    return 0;

}
