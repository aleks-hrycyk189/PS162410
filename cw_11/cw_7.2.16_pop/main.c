#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum stan_polaczenia
{
  nawiazane, nienawiazane, wtrakcie
};

struct komputer
{
    enum stan_polaczenia polaczenie;
    char nazwa[20];
    char IP_kom[10];
};

void wyswietl(struct komputer ko)
{
    printf("Parametry to: %d, %s, %s\n",ko.polaczenie,ko.nazwa, ko.IP_kom);
}

int main()
{
    struct komputer k1;
    k1.polaczenie=nawiazane;
    strcpy(k1.nazwa,"abckomp");
    strcpy(k1.IP_kom,"1.1.1.1");
    wyswietl(k1);
    return 0;
}
