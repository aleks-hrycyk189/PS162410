#include <stdio.h>
#include <stdlib.h>


typedef struct punktn{

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
    printf("Hello world!\n");
    return 0;
}
