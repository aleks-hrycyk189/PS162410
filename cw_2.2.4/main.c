#include <stdio.h>
#include <stdlib.h>


int potegowanie (int n)
{
	int wynik=1, podstawa=2;

	for (int i=0; i<n; i= i+1)
	{
		wynik = wynik * podstawa;
	}
	return wynik;
}


int main()
{
	int n;

	printf("Podaj liczbe n: ");
	scanf ("%d", &n);
	printf ("Wynik wynosi : %d \n", potegowanie(n));
	return 0;
}
