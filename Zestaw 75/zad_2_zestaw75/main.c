#include <stdio.h>
#include <stdlib.h>

int sprawdz(int n, int m, int k)
{
    if(m % k == 0 && m % n == 0)
    {
        return 2;
    }
    else if (m % k ==0 || m % n == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}



int main()
{
    int n,m,k;

    //printf("Podaj liczbe n: ");
    //scanf("\n %d",&n);
    //printf("Podaj liczbe m: ");
    //scanf("\n %d",&m);
   // printf("Podaj liczbe k: ");
    //scanf("\n %d",&k);

    printf("%d", sprawdz(4,8,2));
    return 0;
}
