#include <stdio.h>
#include <stdlib.h>


int potegowanie2 (int n, int m)
{
	int wynik=1, podstawa=n, wykladnik=m;

	for (int i=0; i<m; i= i+1)
	{
		wynik = wynik * podstawa;
	}
	return wynik;
}
int main()
{
	int n,m;

	printf("Podaj liczbe n, ktora jest podstawa: ");
	scanf ("%d", &n);
	printf("Podaj liczbe m, ktora jest wykladnikiem: ");
	scanf("%d", &m);
	printf ("Wynik wynosi : %d \n", potegowanie2(n,m));
	return 0;
}
