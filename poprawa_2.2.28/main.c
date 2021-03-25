#include <stdio.h>
#include <stdlib.h>

int rekurencja(int n,int m)
{
    if(m==0)
        return n;
        // f(n,m)=f(m,n)
    if (m>n)
        return rekurencja(m,n);
        //f(n,m)=n-m + f(n-1,m)+f(n,m-1) dla n,m>0
    return n - m + rekurencja(n-1,m) + rekurencja(n,m-1);
}

int main()
{
    int n, m;
    printf("Podaj liczbe n: ");
    scanf("%d", &n);
    printf("Podaj liczbe m: ");
    scanf("%d", &m);
    printf("Wynik dla danych: %d oraz %d to: %d", n,m,rekurencja(n,m));

    return 0;
}
