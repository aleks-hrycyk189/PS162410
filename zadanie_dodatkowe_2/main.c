#include <stdio.h>
#include <stdlib.h>

void foo(int a,int b)
{
    int d= (b+=4)-(a*=2); // a=12 , b=3 , d= -9
    a=(d^=2); // a=-11 , b=3  , d=-11
    d=(b/=4)*(a-=3); // a=-14  , b=0  , d=0
}

int main()
{
    //wpisz wartosci zmiennych po wykonaniu danej linijki kodu
    int a = 162410; //tu wpisz swoj numer indeksu
    int b=a%9;
    int c=b%4;
    foo(b+1,c-2);
    return 0;
}
