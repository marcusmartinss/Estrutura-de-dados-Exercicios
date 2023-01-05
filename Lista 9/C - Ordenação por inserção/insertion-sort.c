#define key(A) (A)
#define less(A, B) (key(A) < key(B))
#define exch(A, B) { Item t = A; A = B; B = t; }
#define cmpexch(A, B) { if (less(B, A)) exch(A, B); }

typedef long int Item;

#include <stdio.h>

void insertionsort(Item *vetor, int left, int right)
{
    for (int i = left + 1; i <= right; i++)
        for (int j = i; j > left; j--)
            cmpexch(vetor[j-1], vetor[j]);

// Forma mais otimizada com sentinela

    for (int i = right; i > left; i--)
        cmpexch(vetor[i-1], vetor[i]);

    for (int i = left + 2; i <= right; i++)
    {
        int j = i;
        Item tmp = vetor[j];

        while ( less(tmp, vetor[j - 1]) )
        {
            vetor[j] = vetor[j-1];
            j--;
        }
        
        vetor[j] = tmp;
    }
}

int main()
{
    int i = 0;
    Item vetor[50000];

    while ( scanf("%ld", &vetor[i]) != EOF )
        i++;
    
    insertionsort(vetor, 0, i-1);

    for (int j = 0; j < i; j++)
    {
        printf("%ld", vetor[j]);

        if ( (j + 1) < i ) printf(" ");
    }

    printf("\n");
 return 0;
}