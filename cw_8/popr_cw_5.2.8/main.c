#include <stdio.h>
#include <stdlib.h>

void podmien(char *zdanie)
{
    for(int i=0; zdanie[i]!=0;i++)
    {
       if((zdanie[i]>='a')&&(zdanie[i]<='z'))
        zdanie[i] -=('a' - 'A');
    }
    printf("%s", zdanie);
}


int main()
{
    char zdanie[] = "ala ma kota";
    podmien(zdanie);
    return 0;
}
