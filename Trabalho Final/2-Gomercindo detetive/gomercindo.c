// #define KEY(A) (A)
// #define LESS(A, B) (KEY(A) < KEY(B))
// #define EQ(A, B) (KEY(A) == KEY(B))
// #define LESS_EQ(A, B) (KEY(A) <= KEY(B))
// #define EXCH(A, B) { Item t = A; A = B; B = t; }
// #define CMP_EXCH(A, B) { if (LESS(B, A)) EXCH(A, B); }
// #define EQ_STR(A, B) (strcmp(KEY(A), KEY(B)) == 0)
// #define NULL_ITEM { Item new;  }

// typedef int Item;

typedef struct no_st
{
	int e;
	int prox;
} no_st;

// typedef struct cabeca_st
// {
// 	no_st *inicio;
// 	int no_count;
// 	int *ultimo;
// } cabeca_st;

#include <stdio.h>
#include <stdlib.h>

// int inicializa_lista(cabeca_st *h);
// int insere_inicio(cabeca_st *h, Item e);
// int remove_inicio(cabeca_st *h);
// int insere_depois_ou_no_fim(cabeca_st *h, Item e, int p);
// int insere_depois(no_st *no, Item e);
// Item busca_lista(cabeca_st *h, Item b);


int main()
{
    int numero_pistas;
    int identificador;

    scanf("%d", &numero_pistas);

    int pos, pos_primeiro;

    no_st *pista = malloc( sizeof(no_st) * 5001 );

    for (int i = 0; i < numero_pistas; i++)
    {
        scanf("%d", &pos);
        scanf("%d %d", &pista[pos].e, &pista[pos].prox);

		if ( i == 0 ) pos_primeiro = pos;
        
        // if ( pista[i].prox == -1 ) head.ultimo = &pista[i].e;
    }

	pos = pos_primeiro;

	printf("%d\n", pista[pos_primeiro].e);

	for (int i = 0; i < numero_pistas-1; i++)
	{
		printf("%d\n", pista[pista[pos].prox].e );
		pos = pista[pos].prox;
	}

 return 1;
}

// int inicializa_lista(cabeca_st *h)
// {
// 	h -> inicio = NULL;
// 	h -> no_count = 0;
// 	h -> ultimo = NULL;

//  return 1;
// }

// int insere_inicio(cabeca_st *h, Item e)
// {
// 	no_st *novo_no = malloc( sizeof(no_st) );

// 	if( novo_no == NULL ) return 0;

// 	novo_no -> e = e;
// 	novo_no -> prox = h -> inicio;
// 	h -> inicio = novo_no;
// 	h -> no_count++;
//  return 1;
// }

// int remove_inicio(cabeca_st *h)
// {
// 	no_st *to_remove = h -> inicio;
// 	h -> inicio = h -> inicio -> prox;
	
// 	Item ret = to_remove -> e;
// 	free(to_remove);
	
// 	h -> no_count--;
//  return ret;
// }

// int insere_depois_ou_no_fim(cabeca_st *h, Item e, int p)
// {
// 	int i = 0;
// 	no_st *aux = h -> inicio;
	
// 	while( i < p && aux -> prox != NULL)
// 	{
// 		aux = aux -> prox;
// 		i++;
// 	}

// 	if ( insere_depois(aux, e) == 0 ) return 0;

// 	h -> no_count++;
//  return 1;
// }

// int insere_depois(no_st *no, Item e)
// {
// 	no_st *novo_no = malloc( sizeof(no_st) );

// 	if( novo_no == NULL ) return 0;
// 	novo_no -> e = e;

// 	novo_no -> prox = no -> prox;
// 	no -> prox = novo_no;

//  return 1;
// }

// Item busca_lista(cabeca_st *h, Item b)
// {
// 	no_st *aux = h -> inicio;

// 	while( aux != NULL && ! EQ(b, aux -> e) )
// 		aux = aux -> prox;
	
// 	if( aux == NULL )
// 		return NULL_ITEM;

//  return aux -> e;
// }