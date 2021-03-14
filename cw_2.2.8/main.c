#include <stdio.h>
#include <stdlib.h>

const dokl = 0.0001;

double pierwiastkowanie(int n)
{
    double liczba= n/2;
    while(fabs(liczba-n/liczba)>0.0001)
    {
    {
        liczba=(liczba+n/liczba)/2;
        if(liczba*liczba==n)
        break;
    }
    }
     //printf("%lf \n", liczba);
     return liczba;
}
int main()
{
	int n;

	printf("Podaj liczbe n: ");
	scanf ("%d", &n);
	printf ("Wynik wynosi : %lf \n", pierwiastkowanie(n));
	return 0;
}
