#include <stdio.h>
#include <stdlib.h>

union foo
{
    unsigned int x;
    unsigned char tab[6];
};

int main()
{
    union foo zadanie;
    zadanie.x=0x61626364;
    printf("%u\n",zadanie.x);
    printf("%c\n",zadanie.tab[0]);
    printf("%c\n",zadanie.tab[1]);
    printf("%c\n",zadanie.tab[2]);
    printf("%c\n",zadanie.tab[3]);
    printf("%c\n",zadanie.tab[4]);
    printf("%c\n",zadanie.tab[5]);
    return 0;
}
