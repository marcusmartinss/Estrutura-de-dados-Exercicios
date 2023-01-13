#define KEY(A) (A)
#define LESS(A, B) (KEY(A) < KEY(B))
#define LESSEQ(A, B) (KEY(A) <= KEY(B))
#define EXCH(A, B) { Item t = A; A = B; B = t; }
#define CMPEXCH(A, B) { if (LESS(B, A)) EXCH(A, B); }

typedef struct Item
{
	char *palavra_jp = malloc( sizeof(char) * 80 );
	char *palavra_br = malloc( sizeof(char) * 80 );
} Item;

#include <stdio.h>
#include <stdlib.h>

int separa(Item *vetor, int left, int right)
{
	Item p = vetor[right];
	int i = left - 1, j = right;
	
    for(;;)
	{
		while( LESS(vetor[++i], p) );
		while( LESS(p, vetor[--j]) ) if ( j == left ) break;

		if ( i >= j ) break;

		EXCH( vetor[i], vetor[j] );
	}
	
    EXCH( vetor[i], vetor[right] );

 return i;
}

void quicksortM3(Item *vetor, int left, int right)
{
	if( left >= right ) return;

	CMPEXCH(vetor[ (left + right)/2 ], vetor[right]);
	CMPEXCH(vetor[left], vetor[ (left + right)/2 ]);
	CMPEXCH(vetor[right], vetor[ (left + right)/2 ]);

	int j = separa(vetor, left, right);

	quicksortM3(vetor, left, j - 1);
	quicksortM3(vetor, j + 1, right);
}

int main()
{
    int num;
    scanf("%d", &num);

    Item *vetor = malloc( sizeof(Item) * num );

    for (int i = 0; i < num; i++)
        scanf("%d", &vetor[i]);
	
    quicksortM3(vetor, 0, num - 1);

    for (int i = 0; i < num; i++)
    {
        printf("%d", vetor[i]);
        i == num - 1 ? printf("\n") : printf(" ");
    }

 return 0;
}