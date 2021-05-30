#include <stdio.h>
#include <stdlib.h>


struct punktn{

double *t;
int x; //wymiar
};

void przepisz(struct punktn tab1[], struct punktn tab2[], int n)
{
    for(int i=0; i<n; i++)
    {
        tab2[i].t = malloc(tab1[i].x*sizeof(double));
        for(int j=0; j<tab1[i].x; j++)
        {
            tab2[i].t[j] = tab1[i].t[j];
        }

    }
}
int main()
{
     struct punktn A;
    A.x = 2;
    A.t =malloc(sizeof(double));
     struct punktn B;
    B.x = 4;
    B.t =malloc(sizeof(double));
    struct punktn C;
    C.x = 2;
    C.t =malloc(sizeof(double));
     struct punktn D;
    D.x = 5;
    D.t =malloc(sizeof(double));
     struct punktn tab[2] = {A,B};
     struct punktn tab1[2] = {C,D};;
    przepisz(tab,tab1,2);
    return 0;
}

