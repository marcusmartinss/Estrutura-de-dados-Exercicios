#define KEY(A) (A)
#define LESS(A, B) (KEY(A) < KEY(B))
#define EQ(A, B) (KEY(A) == KEY(B))
#define LESS_EQ(A, B) (KEY(A) <= KEY(B))
#define EXCH(A, B) { Item t = A; A = B; B = t; }
#define CMP_EXCH(A, B) { if (LESS(B, A)) EXCH(A, B); }
#define EQ_STR(A, B) (strcmp(KEY(A), KEY(B)) == 0)
#define NULL_ITEM(Item) { NULL, 0, "\0" }

typedef struct Item
{
    char string[101];
    struct Item *prox;
} Item;

typedef struct Pilha_st
{
    Item *v;
    int topo_st;
    int size;
} Pilha_st;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int inicializa_pilha(Pilha_st *p, int s);
int empilha(Pilha_st *p, Item e);
int p_esta_vazia(Pilha_st *p);
Item topo(Pilha_st *p);
void desempilha(Pilha_st *p);


int main()
{
    char string[108];
    
    Pilha_st *pilha = malloc( sizeof(Pilha_st) * 100 );

    inicializa_pilha(pilha, 100);
    Item tmp;
    char string_aux[108], char_aux;

    while ( scanf("%s", string) != EOF )
    {
        if ( strcmp(string, "desfazer") == 0 )
        {

            if ( p_esta_vazia(pilha) )
                printf("NULL\n");
            else
            {
                tmp = topo(pilha);
                printf("%s\n", tmp.string);
                desempilha(pilha);
            }
        }

        if ( strcmp(string, "inserir") == 0 )
        {
            scanf("%c%[^\n]s", &char_aux, string_aux);
            Item *new_item = malloc(sizeof(Item));
            strcpy(new_item->string, string_aux);
            empilha(pilha, *new_item);
        }
    }

 return 0;
}

int inicializa_pilha(Pilha_st *p, int s)
{
    p -> v = malloc(sizeof(Item) * s);
    if( p == NULL ) return 0;
    
    p -> size = s;
    p -> topo_st = 0;

 return 1;
}

int empilha(Pilha_st *p, Item e)
{
    if( p -> size == p -> topo_st) return 0;

    p -> v[p -> topo_st++] = e;

 return 1;
}

int p_esta_vazia(Pilha_st *p)
{
    return p -> topo_st == 0;
}

Item topo(Pilha_st *p)
{
    return p -> v[p -> topo_st - 1];
}

void desempilha(Pilha_st *p)
{
    p -> topo_st--;
}