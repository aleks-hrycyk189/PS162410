#include <stdio.h>
#include <stdlib.h>
#include<math.h>

struct punkt{

double x,y,z;

};

double minimum_odleglosc(struct punkt tab[], int n)
{
    double temp;
    double min = sqrt(pow(tab[1].x-tab[0].x,2)+ pow(tab[1].y-tab[0].y,2)+pow(tab[1].z-tab[0].z,2));
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            temp = sqrt(pow(tab[j].x-tab[i].x,2) + pow(tab[j].y-tab[i].y,2) + pow(tab[j].z-tab[i].z,2));
        }
        if(temp<min)
        {
            min = temp;
        }
    }
    return min;
}

int main()
{
    struct punkt A;
    A.x = 2;
    A.y = 3;
    A.z = 4;
     struct punkt B;
    B.x = 5;
    B.y = 6;
    B.z = 7;
     struct punkt C;
    C.x = 2;
    C.y = 4;
    C.z = 6;
    struct punkt tab[3] ={A,B,C};
    printf("%f", minimum_odleglosc(tab,3));

    return 0;
}
