#include <stdio.h>
#include <stdlib.h>


double potegowanie2 (int n, int m)
{
    if( (n>=0) & (m>=0))
    {
        int wynik=1, podstawa=n, wykladnik=m;

        for (int i=0; i<m; i= i+1)
        {
            wynik = wynik * podstawa;
        }
            return wynik;
    }


    else
    {
        double wynik=1, podstawa=n, wykladnik=m;
        m = m * (-1);
        for (int i=0; i<m; i= i+1)
        {
            wynik = wynik * podstawa;
        }
            return 1/wynik;
    }

}
int main()
{
	int n,m;

	printf("Podaj liczbe n, ktora jest podstawa: ");
	scanf ("%d", &n);
	printf("Podaj liczbe m, ktora jest wykladnikiem: ");
	scanf("%d", &m);
	printf ("Wynik wynosi : %lf \n", potegowanie2(n,m));
	return 0;
}
