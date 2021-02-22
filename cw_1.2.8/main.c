#include <stdio.h>
#include <stdlib.h>

int main()

{
    int a,b,c;
	double wynik;
    printf("Podaj trzy liczby: \n");
    scanf("%d %d %d", &a, &b, &c);
    wynik=(double)(a+b+c)/3;
    printf("%lf",wynik);
    //printf("%lf",(double)(a+b+c)/3);
    return 0;
}
