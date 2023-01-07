#define KEY(A) (A)
#define LESS(A, B) (KEY(A) < KEY(B))
#define LESSEQ(A, B) (KEY(A) <= KEY(B))
#define EXCH(A, B) { Item t = A; A = B; B = t; }
#define CMPEXCH(A, B) { if (LESS(A, B)) EXCH(A, B); }

typedef int Item;

#include <stdio.h>
#include <stdlib.h>

Item *merge(Item *a, int left_a, int right_a, Item *b, int left_b, int right_b)
{
    int size_a = (right_a - left_a + 1);
    int size_b = (right_b - left_b + 1);

    Item *vetor2 = malloc(sizeof(Item) * (size_a + size_b));

    int left_c = 0;
    int right_c = (size_a + size_b - 1);

    int ia = left_a, ib = left_b, ic = left_c;

    while(ia <= right_a && ib <= right_b)
    {
        if( LESSEQ(a[ia], b[ib]) )
            vetor2[ic++] = a[ia++];
        else
            vetor2[ic++] = b[ib++];
    }

    while(ia <= right_a)
        vetor2[ic++] = a[ia++];
  
    while(ib <= right_b)
        vetor2[ic++] = b[ib++];

 return vetor2;
}

void mergesort(Item *vetor,int left,int right)
{
    if(left >= right) return;

    int meio = (left + right)/2;

    mergesort(vetor, left, meio);
    mergesort(vetor, meio + 1, right);

    Item *vetor3 = merge(vetor,left, meio, vetor, meio+1, right);

    int tamanho = (right - left + 1);
    for(int i = 0; i < tamanho; i++)
        vetor[left++] = vetor3[i];

    free(vetor3);
}

int main()
{
    Item vetor[100000], i = 0;

    while ( scanf("%d", &vetor[i]) != EOF ) i++;

    mergesort(vetor, 0, i-1);

    for (int j = 0; j < i; j++)
    {
        printf("%d", vetor[j]);
        j == i-1 ? printf("\n") : printf(" ");
    }

 return 0;
}