#define KEY(A) (A)
#define LESS(A, B) (KEY(A) < KEY(B))
#define LESSEQ(A, B) (KEY(A) <= KEY(B))
#define EXCH(A, B) { Item t = A; A = B; B = t; }
#define CMPEXCH(A, B) { if (LESS(B, A)) EXCH(A, B); }

typedef int Item;

#include <stdio.h>
#include <stdlib.h>

int search(Item *vetor, int tam, Item a_buscar)
{
    int left = 0, right = tam - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        
        if (KEY(vetor[mid]) == a_buscar)
            return 1;
        else
            if (KEY(vetor[mid]) < a_buscar)
                left = mid + 1;
            else
                right = mid - 1;
    }

 return 0;
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

void mergesort(Item *vetor, int tamanho)
{
    if (tamanho < 2) return;

    int mid = tamanho / 2;

    mergesort(vetor, mid);
    mergesort(&vetor[mid], tamanho - mid);
    merge(vetor, mid, vetor + mid, tamanho - mid);
}

int main()
{
    int qtd;
    scanf("%d", &qtd);

    Item *vetor = (Item *)malloc(qtd * sizeof(Item));

    for (int i = 0; i < qtd; i++)
    {
        scanf("%d", &vetor[i]);
        fflush(stdin);
    }

    mergesort(vetor, qtd);

    Item a_buscar;

    while (scanf("%d", &a_buscar) != EOF)
    {
        printf("%s\n", search(vetor, qtd, a_buscar) ? "sim" : "nao");
        fflush(stdin);
    }

 return 0;
}