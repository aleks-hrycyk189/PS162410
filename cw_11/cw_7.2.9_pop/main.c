#include <stdio.h>
#include <stdlib.h>


struct lista{

 int n;
 struct lista*wsk;

};


int main()
{

    struct lista A;
    A.n = 4;
    A.wsk=malloc(sizeof(struct lista));
    printf("%p \n", A.wsk);
    printf("%d", A.n);
    return 0;
}
