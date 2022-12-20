/* #define key(A) (A)
#define less(A, B) (key(A) < key(B))
#define exch(A, B) { Item t = A; A = B; B = t; }
#define cmpexch(A, B) { if (less(B, A)) exch(A, B); }

typedef long int Item;

#include <stdio.h>

long busca_geral(Item *vetor, Item numero, unsigned long pos, unsigned long right)
{
    for (pos = 0; pos < right; pos++)
        if ( vetor[pos] == numero )
            return pos;
    
    return -1;
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
        printf( "%ld\n", busca_geral(vetor, temp, 0, n) );
    }

 return 0;
} */