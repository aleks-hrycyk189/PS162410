#include <stdio.h>
#include <stdlib.h>

int *** stworz(int n, int m, int o)
{
    int *** temp=malloc(n*sizeof(int**));
    for(int i=0;i<n;i++)
    {
        *(temp+i)=malloc(m*sizeof(int*));
        for(int j=0;j<m;j++)
        {
            *(*(temp+i)+j)=malloc(o*sizeof(int));
        }
    }
    return temp;
}

void foo(int*** tab,int n,int m,int o)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            free(*(*(tab+i)+j));
        }
        free(*(tab+i));
    }
    free(tab);

}

int main()
{
    int n=3,m=2,o=3;
    int *** tab=stworz(n,m,o);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            for(int k=0;k<o;k++)
            {
                *(*(*(tab+i)+j)+k)=i*j*k;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            for(int k=0;k<o;k++)
            {
                printf("[%d,%d,%d]=%d,%p\n",i,j,k,*(*(*(tab+i)+j)+k),*(*(tab+i)+j)+k);
            }
        }
    }
      printf("KONIEC");
    foo(tab,n,m,o);

    return 0;
}
