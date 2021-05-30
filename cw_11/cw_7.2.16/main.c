#include <stdio.h>
#include <stdlib.h>

typedef enum stan_polaczenia
{
  -1,0,1
};

typedef struct komputer
{
    char nazwa[20];
    enum stan_polaczenia polaczenie;
    char IP_kom[10];
};

void wyswietl(struct komputer)
{
    printf("Twoja nazwa to: ")
}
int main()
{
    printf("Hello world!\n");
    return 0;
}
