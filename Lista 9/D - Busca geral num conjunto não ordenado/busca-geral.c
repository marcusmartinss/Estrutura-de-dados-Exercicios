#define key(A) (A)
#define less(A, B) ((A) < (B))
#define exch(A, B) { typeof(A) t = A; A = B; B = t; }
#define cmpexch(A, B) { if (less(A, B)) exch(A, B); }

typedef struct Item
{
    int numero;
    int indice;
} Item;

#include <stdio.h>
#include <stdlib.h>

void insertionsort(Item *vetor, int left, int right);
int busca_binaria(Item *vetor, int temp, int left, int right);

int main()
{
    int m, n, temp;

    scanf("%d %d", &n, &m);

    Item vetor[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i].numero);
        vetor[i].indice = i;
    }
    
    insertionsort(vetor, 0, n);

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &temp);
        int *res = malloc(sizeof(int)*4);
        res = busca_binaria(vetor, temp, 0, n);
        printf("%d\n", res);
    }

 return 0;
}

void insertionsort(Item *vetor, int left, int right)
{
    for (int i = right; i > left; i--)
    {
        if ( less(vetor[i-1].numero, vetor[i].numero) )
            exch(vetor[i-1], vetor[i]);
    }


    for (int i = left + 2; i <= right; i++)
    {
        int j = i;
        Item temp = vetor[j];

        while ( less(temp.numero, vetor[j - 1].numero) )
        {
            vetor[j] = vetor[j-1];
            j--;
        }
        
        vetor[j] = temp;

        printf("\n");
        for (int k = 0; k < right; k++)
        {
            printf("%d\n", vetor[k].numero);
        }
        printf("\n");
    }
}

int busca_binaria(Item *vetor, int temp, int left, int right)
{
    if (left > right)
        return -1;

    int meio = (right+left)/2;
    Item elemento_meio = vetor[meio];
    
    if (less(temp, elemento_meio.numero))
        return busca_binaria(vetor, temp, left, meio);
    else
        if (less(elemento_meio.numero, temp))
            return busca_binaria(vetor, temp, meio+1, right);
    
    if ( temp == elemento_meio.numero )
        return elemento_meio.indice;
}
