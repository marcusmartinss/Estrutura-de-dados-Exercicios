#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct no {
    char string[27];
    int tamanho;
    struct no *proximo;
    struct no *anterior;
} no;

typedef struct lista {
    no *inicio;
    no *fim;
} lista;

void inicializaLista(lista *l) {
    l->inicio = NULL;
    l->fim = NULL;
}

void insereFim(lista *l, char *valor, int tam) {
    no *novo = malloc(sizeof(no));
    
    strcpy(novo->string, valor);

    novo->tamanho = tam;
    novo->proximo = NULL;
    novo->anterior = l->fim;

    if (l->fim != NULL) {
        l->fim->proximo = novo;
    }


    if (l->inicio == NULL && l->fim == NULL) {
        l->inicio = novo;
    }

    l->fim = novo;
}

int main() 
{
    int tam;
    lista *cidades = malloc(sizeof(lista));
    inicializaLista(cidades);

    char cidade[27];
    while (scanf("%s", cidade) != EOF)
    {
        tam = strlen(cidade);
        insereFim(cidades, cidade, tam);
    }
    no *atual = cidades->inicio;
    while (atual != NULL)
    {
        if (atual->proximo == NULL)
        {
            printf("%s\n", atual->string);
            break;
        }
        int len1 = atual->tamanho;
        char ultimoCaractere;

        ultimoCaractere = atual->string[atual->tamanho - 1];

        char primeiroCaractere;
        primeiroCaractere = atual->proximo->string[0];
    
        if( tolower(ultimoCaractere) == tolower(primeiroCaractere) )
        {
            insereFim(cidades, atual->proximo->string, atual->proximo->tamanho);

            atual->proximo = atual->proximo->proximo;
        }

        printf("%s\n", atual->string);
        atual = atual->proximo;
    }
    return 0;
}