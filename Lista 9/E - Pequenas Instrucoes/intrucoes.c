#define key(A) (A)
#define less(A, B) (A < B)
#define exch(A, B) { Item t = A; A = B; B = t; }
#define cmpexch(A, B) { if (less(B, A)) exch(A, B); }

#include <stdio.h>

typedef struct{
    int codigo_instrucao;
    char palavra_chave[15];
} Item;

void insertion_sort(Item *vetor, int left, int right)
{
    for (int i = right; i > left; i--)
        if ( less(vetor[i-1].codigo_instrucao, vetor[i].codigo_instrucao) )
            exch(vetor[i-1], vetor[i]);

    for (int j = left + 2; j <= right; j++)
    {
        Item tmp = vetor[j];

        printf("2\n");

        while ( less(tmp.codigo_instrucao, vetor[j - 1].codigo_instrucao) )
        {
            vetor[j] = vetor[j-1];
            j--;
        }

        vetor[j] = tmp;
    }
}

void busca_binaria(Item *instrucoes, int temp, int pos, int right)
{
    if (pos >= right) {
        printf("undefined\n");
        return;
    }

    int meio = (right+pos)/2;
    Item elemento_meio = instrucoes[meio];
    
    if (less(temp, elemento_meio.codigo_instrucao))
        busca_binaria(instrucoes, temp, 0, meio);
    else
        if (less(elemento_meio.codigo_instrucao, temp))
            busca_binaria(instrucoes, temp, meio+1, right);
    
    if ( temp == elemento_meio.codigo_instrucao )
    {
        printf("%s\n", elemento_meio.palavra_chave);
        return;
    }
}

int main()
{
    int qtd_instrucoes, temp;

    scanf("%d", &qtd_instrucoes);

    Item instrucoes[qtd_instrucoes];

    for (int i = 0; i < qtd_instrucoes; i++)
        scanf("%d %s", &instrucoes[i].codigo_instrucao, instrucoes[i].palavra_chave);

    insertion_sort(instrucoes, 0, qtd_instrucoes-1);

    while ( scanf("%d", &temp) != EOF )
        busca_binaria(instrucoes, temp, 0, qtd_instrucoes-1);

 return 0;
}