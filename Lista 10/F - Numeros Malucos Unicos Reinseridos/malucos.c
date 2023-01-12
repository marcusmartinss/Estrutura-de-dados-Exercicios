#define KEY(A) (A)
#define LESS(A, B) (KEY(A) < KEY(B))
#define LESSEQ(A, B) (KEY(A) <= KEY(B))
#define EXCH(A, B) { Item t = A; A = B; B = t; }
#define CMPEXCH(A, B) { if (LESS(B, A)) EXCH(A, B); }

typedef int Item;

#include <stdio.h>
#include <stdlib.h>

int partition(Item *vetor, int size)
{
    int left = -1, right = size - 1;
    Item pivot = vetor[right];

    while (1)
    {
        while ( LESS(vetor[++left], pivot) );

        while ( LESS(pivot, vetor[--right]) && right > left );

        if ( left >= right )
            break;
        
        EXCH(vetor[left], vetor[right]);
    }

    EXCH(vetor[left], vetor[size - 1]);

 return left;
}

void quicksort(Item *vetor, int size)
{
    if (size < 2)
        return;

    CMPEXCH(vetor[(size - 1) / 2], vetor[size - 1]);
    CMPEXCH(vetor[0], vetor[(size - 1) / 2]);
    CMPEXCH(vetor[size - 1], vetor[(size - 1) / 2]);

    int m = partition(vetor, size);

    quicksort(vetor, m);
    quicksort(vetor + m + 1, size - m - 1);
}

void merge(Item *a, int size_a, Item *b, int size_b)
{
    Item *temp = (Item *)malloc((size_a + size_b) * sizeof(Item));
    int i = 0, j = 0, k = 0;
    for (; i < size_a && j < size_b; k++)
    {
        if (KEY(a[i]) <= KEY(b[j]))
            temp[k] = a[i++];
        else
            temp[k] = b[j++];
    }

    while (i < size_a)
        temp[k++] = a[i++];
    
    while (j < size_b)
        temp[k++] = b[j++];

    for (k = 0, i = 0; i < (size_a + size_b); i++, k++)
        a[i] = temp[k];

    free(temp);
}

int remove_duplicates(Item *vetor, int n)
{
    int size = 1;

    for (int i = 1; i < n; i++)
        if (vetor[i] != vetor[size - 1])
            vetor[size++] = vetor[i];

 return size;
}

int main()
{
    int n;
    scanf("%d", &n);

    int *vetor = (int *)malloc(sizeof(int) * (2 * n));

    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        scanf("%d", vetor + i);
    }

    quicksort(vetor, n);

    int size = remove_duplicates(vetor, n);
    if (size % 2)
        vetor[size++] = 1000000000;

    int size_crazy = 0;

    for (int i = 0; i < size - 1; i += 2)
        vetor[size + size_crazy++] = vetor[i] + vetor[i + 1];

    merge(vetor, size, vetor + size, size_crazy);

    size = remove_duplicates(vetor, size + size_crazy);

    for (int i = 0; i < size; i += 4)
        printf("%d\n", vetor[i]);

    printf("Elementos: %d\n", size);

 return 0;
}