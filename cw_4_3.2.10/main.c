#include <stdio.h>
#include <stdlib.h>


void* zadanie()
{
    return malloc(sizeof(double));
}

int main()
{
   printf("%p\n", zadanie());
   return 0;
}
