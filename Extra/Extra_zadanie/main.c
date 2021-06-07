#include <stdio.h>
#include <stdlib.h>

struct node{
    int x;
    struct node * next;
};

//utworz liste z glowa
struct node *utworzz()
{
    struct node * wskaznik = malloc(sizeof(struct node));
    wskaznik -> next = NULL;
    return wskaznik;
};

// wyswietl liste z glowa
void wyswietlListezGlowa(struct node*Lista)
{
    struct node* temp = Lista;
    if(temp == NULL)
    {
        printf("Lista pusta \n");
    }
    while(temp->next != NULL)
    {
        printf("%d\n", temp -> x);
        temp = temp -> next;
    }
    printf("--- \n");
}

//funkcja dla listy z glowa
void fooz(struct node *Lista, int a)
{
    struct node *wsk = Lista;
    if (wsk -> next != NULL)
    {
        while(wsk -> next != NULL)
        {
            wsk = wsk -> next;
        }
    }
    wsk -> x = a;
    wsk -> next = malloc(sizeof(struct node));
    wsk = wsk -> next;
    wsk -> next = NULL;
}

// utworz liste bez glowy
struct node * utworzb()
{
    return NULL;
};

// wyswietl liste bez glowy
void wyswietlListebezGlowy(struct node *Lista)
{
    struct node*temp=Lista;
    if(temp == NULL)
    {
        printf("Lista pusta\n");
    }
    do
    {
        printf("%d\n", temp -> x);
        temp = temp -> next;
    }while(temp != Lista);
    printf("--- \n");
}

//dla listy bez glowy
struct node *foob(struct node *Lista, int a)
{
    struct node *wsk;
    if(Lista == NULL)
    {
        wsk = malloc(sizeof(struct node));
        Lista = wsk;
    }
    else
    {
        wsk = Lista;
        while(wsk -> next != Lista)
        {
            wsk = wsk -> next;
        }
        wsk -> next = malloc(sizeof(struct node));
        wsk = wsk -> next;
    }
    wsk -> x = a;
    wsk -> next = Lista;
    return Lista;
}


// w tej funkcji : lista1 - lista bez glowy, lista2- lista z glowa
int czy_sa_rowne(struct node *lista1, struct node *lista2)
{
    if(lista1 == NULL || lista2 == NULL)
        return 0;

    struct node *tmpLista1 = lista1;
    struct node *tmpLista2 = lista2;
    int sum1 = 0;
    int sum2 = 0;
    // sumowanie elementow listy bez glowy
    // tutaj petla do..while, aby wykonalo sie
    do
    {
        sum1 += tmpLista1->x;
        tmpLista1 = tmpLista1->next;
    } while(tmpLista1 != lista1);

    // sumowanie elementow listy z glowa
    while(tmpLista2->next != NULL)
    {
        sum2 += tmpLista2->x;
        tmpLista2 = tmpLista2->next;
    }
    if(sum1 == sum2)
    {
        return 1;
    }
    return 0;
}

int main()
{
    printf("Pierwszy przypadek testowy \n");
    // lista bez glowy
    struct node * lista1 = utworzb();
    lista1 = foob(lista1, 3);
    lista1 = foob(lista1, 5);
    lista1 = foob(lista1, -5);
    lista1 = foob(lista1, 7);
    wyswietlListebezGlowy(lista1);

    // lista z glowa
    struct node * lista2= utworzz();
    fooz(lista2, 3);
    fooz(lista2, 6);
    fooz(lista2, -5);
    fooz(lista2, 7);
    wyswietlListezGlowa(lista2);


    printf("Czy listy sa rowne? \n");
    printf("%d\n", czy_sa_rowne(lista1, lista2));

    printf("Drugi przypadek testowy \n");
    // lista bez glowy
    struct node * lista3 = utworzb();
    lista3 = foob(lista3, 3);
    lista3 = foob(lista3, 6);
    lista3 = foob(lista3, -5);
    lista3 = foob(lista3, 7);
    wyswietlListebezGlowy(lista3);

    // lista z glowa
    struct node * lista4= utworzz();
    fooz(lista4, 3);
    fooz(lista4, 6);
    fooz(lista4, -5);
    fooz(lista4, 7);
    wyswietlListezGlowa(lista4);


    printf("Czy listy sa rowne? \n");
    printf("%d\n", czy_sa_rowne(lista3, lista4));

    return 0;
}
