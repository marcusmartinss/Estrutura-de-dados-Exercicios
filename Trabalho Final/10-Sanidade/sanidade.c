#define KEY(A) (A)
#define LESS(A, B) (KEY(A) < KEY(B))
#define EQ(A, B) (KEY(A) == KEY(B))
#define LESS_EQ(A, B) (KEY(A) <= KEY(B))
#define EXCH(A, B) { typeof(A) t = A; A = B; B = t; }
#define CMP_EXCH(A, B) { if (LESS(B, A)) EXCH(A, B); }
#define EQ_STR(A, B) (strcmp(KEY(A), KEY(B)) == 0)
#define NULL_ITEM(Item) { NULL, 0, "\0" }

#include <stdio.h>
#include <stdlib.h>

typedef unsigned int Item;

typedef struct no_st
{
    Item elem;
    Item anterior;
    Item proximo;
} No_st;

int num_de_elementos = 0;

int saudavel(No_st *nos, No_st ptr1, No_st ptr2)
{
    if ( ptr1.proximo == ptr1.elem || ptr2.anterior == ptr2.elem )
        return 0;
    
    while ( !(ptr1.elem == ptr2.elem) )
    {
        if ( ptr1.proximo == 0 )
            return 0;
        
        int pos_encontrado = encontra_no(nos, ptr1.proximo, 0, num_de_elementos);

        if ( nos[pos_encontrado].anterior != ptr1.elem )
            return 0;
        else
            ptr1 = nos[pos_encontrado];
        
        if ( ptr1.proximo == ptr2.elem )
        {
            if ( ptr1.elem == ptr2.anterior )
                return 1;
            else
                return 0;
        }
    }

 return 1;
}

int encontra_no( No_st *nos, Item endereco, int inicio, int fim )
{
    int meio = (inicio + fim) / 2;

    if ( inicio > fim )
        return -1;

    if ( EQ(nos[meio].elem, endereco) )
        return meio;
    
    if ( LESS(endereco, nos[meio].elem) )
        return encontra_no( nos, endereco, inicio, meio - 1 );
    
    return encontra_no( nos, endereco, meio + 1, fim );
}

int separa(No_st *nos, int left, int right)
{
	Item p = nos[right].elem;
	int i = left - 1, j = right;
	
    for(;;)
	{
		while( LESS(nos[++i].elem, p) );
		while( LESS(p, nos[--j].elem) ) if ( j == left ) break;

		if ( i >= j ) break;

		EXCH( nos[i], nos[j] );
	}
	
    EXCH( nos[i], nos[right] );

 return i;
}

void quicksort( No_st *nos, int l, int r)
{
	if( r <= l ) return;

	int j = separa(nos, l, r);

	quicksort(nos, l, j -1);
	quicksort(nos, j+1, r);
}

int main()
{
    No_st ptr1, ptr2, aux;
    No_st *nos = malloc( sizeof(No_st) * 500000 );
    
    scanf("%x %x %x", &ptr1.elem, &ptr1.anterior, &ptr1.proximo);
    scanf("%x %x %x", &ptr2.elem, &ptr2.anterior, &ptr2.proximo);
    
    while ( scanf("%x %x %x", &aux.elem, &aux.anterior, &aux.proximo) != EOF )
        nos[num_de_elementos++] = aux;

    quicksort(nos, 0, num_de_elementos);

    int pos1 = encontra_no( nos, ptr1.proximo, 0, num_de_elementos - 1 );
    int pos2 = encontra_no( nos, ptr2.elem, 0, num_de_elementos - 1 );

    if ( saudavel(nos, ptr1, ptr2) )
        printf("sana\n");
    else
        printf("insana\n");

    free(nos);
 return 0;
}
