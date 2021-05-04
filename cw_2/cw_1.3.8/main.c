#include <stdio.h>
#include <stdlib.h>

int main()
{
    double bok1, bok2, bok3, pole_kwadratu, pole_prostokata, pole_trojkata, polowa_obw;
    int w1;
    printf("Wybierz figure ktorej pole chcesz obliczyc\n 1 kwadrat \n 2 prostokat \n 3 trojkat\n");
    scanf("%d",&w1);
    if(w1==1)
    {
     printf("Podaj bok1 \n");
     scanf("%lf", &bok1);
     printf("Podaj bok2 \n");
     scanf("%lf", &bok2);
     pole_kwadratu= bok1*bok2;
     printf("Pole kwadratu wynosi: %lf",pole_kwadratu);
    }
    else if(w1==2)
    {
     printf("Podaj bok1 \n");
     scanf("%lf", &bok1);
     printf("Podaj bok2 \n");
     scanf("%lf", &bok2);
     pole_prostokata= bok1*bok2;
     printf("Pole prostokata wynosi: %lf",pole_prostokata);
    }
    else if(w1==3)
    {
     printf("Podaj bok1 \n");
     scanf("%lf", &bok1);
     printf("Podaj bok2 \n");
     scanf("%lf", &bok2);
     printf("Podaj bok3 \n");
     scanf("%lf", &bok3);
     polowa_obw= (bok1+bok2+bok3)/2;
     pole_trojkata=sqrt(polowa_obw*(polowa_obw- bok1)*(polowa_obw- bok2)*(polowa_obw- bok3));
     printf("Pole wynosi:""%lf",pole_trojkata);
    }
    else
        printf("Nie ma takiego wyboru");
    return 0;
}
