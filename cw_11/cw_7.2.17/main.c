#include <stdio.h>
#include <stdlib.h>

typedef enum Plec
{
    kobieta, mezczyzna
};

typedef enum kobieta
{
    wolna, zamezna
};

typedef enum mezczyzna
{
    wolny, zonaty
};

typedef union czlowiek
{
    enum kobieta k;
    enum mezczyzna m;
};

typedef struct dane_osobowe
{
  char imie[20];
  char nazwisko[25];
  enum Plec plec;
  union czlowiek stan_cywilny;
};

void wczytywanie(struct dane_osobowe tab[], int n)
{
    int wybor;
    for(int i=0; i<n; i++)
    {
        printf("Jakiej jestes plci: kobieta(1), mezczyzna(2)?");
        scanf("%d", &wybor);
        if(wybor == 1)
            tab[i].plec = kobieta;
        else
            tab[i].plec = mezczyzna;

        printf("Podaj imie: ");
        scanf("%s", tab[i].imie);

        printf("Podaj nazwisko: ");
        scanf("%s", tab[i].nazwisko);

        printf("Jaki jest twoj stan cywilny?");
        if(tab[i].plec == kobieta)
            printf("wolna (1), zamezna(2)");
        else
            printf("wolny (1), zamezny(2)");
        scanf("%d", &tab[i].stan_cywilny.k);

    }
}
int main()
{

    return 0;
}
