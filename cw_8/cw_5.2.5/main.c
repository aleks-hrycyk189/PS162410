#include <stdio.h>
#include <stdlib.h>

void przepisz(wchar_t *napis1, wchar_t *napis2)
{
    int i;
    for(i=0; napis1[i]!=0; i++)
    {
        napis2[i]=napis1[i];
    }
    napis2[i]=0;
}

int main()
{
    wchar_t n1[] = L"WER";
    wchar_t n2[] = L"abcdef";
    przepisz(n1,n2);
    wprintf(L"%s\n",n1);
    wprintf(L"%s\n",n2);
    return 0;
}
