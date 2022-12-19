/* #define key(A) (A)
#define less(A, B) (key(A) < key(B))
#define exch(A, B) { Item t = A; A = B; B = t; }
#define cmpexch(A, B) { if (less(B, A)) exch(A, B); }

typedef long int Item;

#include <stdio.h>

long busca_geral(Item *vetor, Item numero, unsigned long pos, unsigned long right)
{
    if ( vetor[0] == numero )
        return pos;

    if ( pos == right )
        return -1;
    
    busca_geral(&vetor[1], numero, pos+1, right);
}

int main()
{
    long m, n;

    scanf("%ld %ld", &n, &m);

    Item vetor[n];
    Item temp;

    for (int i = 0; i < n; i++)
        scanf("%lu", &vetor[i]);

    for (int i = 0; i < m; i++)
    {
        scanf("%ld", &temp);
        printf( "%ld\n", busca_geral(vetor, temp, 0, n-1) );
    }

 return 0;
} */