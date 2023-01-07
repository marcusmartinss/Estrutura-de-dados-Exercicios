#define KEY(A) (A)
#define LESS(A, B) (KEY(A) < KEY(B))
#define LESSEQ(A, B) (KEY(A) <= KEY(B))
#define EXCH(A, B) { Item t = A; A = B; B = t; }
#define CMPEXCH(A, B) { if (LESS(A, B)) EXCH(A, B); }

typedef int Item;

#include <stdio.h>
#include <stdlib.h>

Item vet_res[800008], vet[100001];

void merge(int *a, int size_a, int *b, int size_b)
{
    int *temp = (Item *) malloc( (size_a + size_b) * sizeof(Item) );
    int i_a = 0, i_b = 0, aux = 0;

    for (; i_a < size_a && i_b < size_b; aux++)
        if (a[i_a] <= b[i_b])
            temp[aux] = a[i_a++];
        else
            temp[aux] = b[i_b++];

    while (i_a < size_a)
        temp[aux++] = a[i_a++];
        
    while (i_b < size_b)
        temp[aux++] = b[i_b++];

    for (aux = 0, i_a = 0; i_a < (size_a + size_b); i_a++, aux++)
        a[i_a] = temp[aux];

    free(temp);
}

int preenche_e_organiza(int n)
{
    int tamanho_vet;

    for (int i = 0; i < 8; i++)
    {
        fflush(stdin);
        scanf("%d", &tamanho_vet);

        for (int j = 0; j < tamanho_vet; j++)
            scanf("%d", &vet[j]);
        
        merge(vet_res, n, vet, tamanho_vet);
        n += tamanho_vet;
    }
    
 return n;
}

void printa_vetor(Item *vetor, int tamanho)
{
    
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d", vetor[i]);
        i == tamanho - 1 ? printf("\n") : printf(" ");
    }
   
 return;
}

int main()
{
    printa_vetor(vet_res, preenche_e_organiza(0) );    

 return 0;
}