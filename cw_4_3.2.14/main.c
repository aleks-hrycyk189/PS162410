#include <stdio.h>
#include <stdlib.h>

int zad(int a)
{
    return a;
}
int zadd(int a)
{
    return a%12;
}
int zadanie_14(int (*wsk1)(int x), int (*wsk2)(int y), int a)
{
    for(int i=0; i<=a; i++)
    {
        if(wsk1(i)!= wsk2(i))
            return 0;
    }
    return 1;
}

int main()
{
   int d = 11;
   int rezultat = zadanie_14(&zad, &zadd, d);
   printf("%d\n", rezultat);

   int e = 14;
   int rezultat2 = zadanie_14(&zad, &zadd, e);
   printf("%d\n", rezultat2);
   return 0;
}
