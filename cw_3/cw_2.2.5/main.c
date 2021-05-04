#include <stdio.h>
#include <stdlib.h>


double potegowanie (int n)
{
	double wynik=1, podstawa=2;
    if(n>=0)
    {
        for (int i=0; i<n; i= i+1)
	{
		wynik = wynik * podstawa;
	}
        return wynik;
    }

	else
    {
        n = n * (-1);
        for (int i=0; i<n; i= i+1)
	{
		wynik = wynik * podstawa;
	}
    }
        return 1/wynik;
}
int main()
{
	int n;

	printf("Podaj liczbe n: ");
	scanf ("%d", &n);
	printf ("Wynik wynosi : %lf \n", potegowanie(n));
	return 0;
}
