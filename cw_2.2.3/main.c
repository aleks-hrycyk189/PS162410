#include <stdio.h>
#include <stdlib.h>

int liczba (int n)
{
	for (int k =(n - 1); k >= 0; k=k-1)
	{
    if (n%k == 0)
        return k;
	}

	return 0;
}

int main()
{
	int n;
	printf("Podaj liczbe n: ");
	scanf ("%d", &n);
	printf ("%d \n", liczba(n));
	return 0;
}
