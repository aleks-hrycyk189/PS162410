#include <stdio.h>
#include <stdlib.h>

typedef struct trojkat
{
    double a, wysokosc;
};

typedef struct prostokat
{
    double a,b;
};

typedef struct rownoleglobok
{
    double a, wysokosc;
};

typedef struct trapez
{
    double a,b,wysokosc;
};

union wymiar
{
    struct trojkat troj;
    struct rownoleglobok rowno;
    struct prostokat prost;
    struct trapez tz;
};

typedef struct figura
{
    union wymiar wym;
    int fig;
};

double pole(struct figura f)
{
    if(f.fig == 1)
        return (f.wym.troj.a*f.wym.troj.wysokosc)/2;
    if(f.fig == 2)
        return (f.wym.rowno.a*f.wym.rowno.wysokosc);
    if(f.fig == 3)
        return (f.wym.prost.a*f.wym.prost.b);
    if(f.fig == 4)
        return ((f.wym.tz.a+f.wym.tz.b)* f.wym.tz.wysokosc)/2;
}

int main()
{
    struct trojkat t;
    t.a = 4;
    t.wysokosc = 6;
    union wymiar wym;
    wym.troj;
    struct figura fg;
    fg.wym;
    fg.fig = 1;
    printf("%f", pole(fg));
    return 0;
}
