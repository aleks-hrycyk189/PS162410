#include <stdio.h>
#include <stdlib.h>

union super_int
{
    int a;
    unsigned int b;
};

int main()
{
    union super_int zm;
    zm.a=4;
    printf("%d\n",zm.a);
    printf("%u\n",zm.b);
    zm.b=12;
    printf("%d\n",zm.a);
    printf("%u\n",zm.b);
    zm.a=9;
    printf("%d\n",zm.a);
    printf("%u\n",zm.b);
    return 0;
}
