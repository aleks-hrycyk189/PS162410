#include <stdio.h>
#include <stdlib.h>


int* zadanie_11(unsigned int n)
{
    return malloc(n * sizeof(int));
}

int main()
{
   unsigned int n;
   printf("%p\n", zadanie_11(n));
   return 0;
}
