#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element * utworz()
{
    struct element * wskaznik = malloc(sizeof(struct element));
    wskaznik->next=NULL;
    return wskaznik;
}

void wyswietlListeZGlowa(struct element*Lista)
{
    struct element*temp=Lista->next;
    if(temp==NULL)
    {
        printf("Lista jest pusta\n");
    }
    while(temp!=NULL)
    {
        printf("%d\n",temp->x);
        temp=temp->next;
    }
    printf("----\n");
}

void dnk(struct element*Lista, int a)
{
    struct element * wsk =  Lista;
    while(wsk->next!=NULL)
    {
        wsk=wsk->next;
    }
    wsk->next=malloc(sizeof(struct element));
    wsk=wsk->next;
    wsk->x=a;
    wsk->next=NULL;
};



int main()
{
    struct element*l1=utworz();
    wyswietlListeZGlowa(l1);
    dnk(l1,3);
    dnk(l1,-2);
    dnk(l1,4);
    wyswietlListeZGlowa(l1);
    return 0;
}
