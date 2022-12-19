#define key(A) (A)
#define less(A, B) (key(A) < key(B))
#define exch(A, B) { Item t = A; A = B; B = t; }
#define cmpexch(A, B) { if (less(B, A)) exch(A, B); }

typedef long int Item;

#include <stdio.h>

void bubblesort(Item *vetor, int left, int right)
{
    for (int i = left; i < right; i++)
        for (int j = left; j < right; j++)
            cmpexch(vetor[j], vetor[j+1]);
}

int main()
{
    int i = 0;
    Item vetor[1000];

    while ( scanf("%ld", &vetor[i]) != EOF )
        i++;
    
    bubblesort(vetor, 0, i-1);

    for (int j = 0; j < i; j++)
    {
        printf("%ld", vetor[j]);

        if ( (j + 1) < i ) printf(" ");
    }

    printf("\n");

 return 0;
}