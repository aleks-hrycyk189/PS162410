#include <stdio.h>
#include <stdlib.h>

int ** foo(int n, int m)
{
    int ** temp=malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
    {
        *(temp+i)=malloc(m*sizeof(int));
    }
    return temp;
}

int main()
{
    int ** tab=foo(3,4);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            *(*(tab+i)+j)=i*j;
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("[%d,%d]=%d,%p\n",i,j,*(*(tab+i)+j),*(tab+i)+j);
        }
    }
    return 0;
}
