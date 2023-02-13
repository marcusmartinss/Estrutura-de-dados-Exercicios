#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no {
    int valor;
    struct no *proximo;
    struct no *anterior;
} no;

typedef struct lista {
    no *inicio;
    no *fim;
    int size;
} lista;

void inicializaLista(lista *l) {
    l->inicio = NULL;
    l->fim = NULL;
    l->size = 0;
}

void insereInicio(lista *l, int valor) {
    no *novo = malloc(sizeof(no));
    novo->anterior = NULL;
    novo->anterior = NULL;
    novo->valor = valor;

    if (l->size == 0)
    {
        l->inicio = novo;
        l->fim = novo;
    }
    else
    {
        l->inicio->anterior = novo;
        novo->proximo = l->inicio;
        l->inicio = novo;
    }
    
    l->size++;
}

void insereFim(lista *l, int valor) {
    no *novo = malloc(sizeof(no));
    novo->proximo = NULL;
    novo->anterior = NULL;
    novo->valor = valor;

    if (l->size == 0)
    {
        l->inicio = novo;
        l->fim = novo;
    }
    else
    {
        l->fim->proximo = novo;
        novo->anterior = l->fim;
        l->fim = novo;
    }

    l->size++;
}

void removeInicio(lista *l) {
    no *tmp = l->inicio;
    l->inicio = tmp->proximo;

    if (l->inicio == NULL)
        l->fim = NULL;

    l->size--;

    free(tmp);
}

void removeUltimo(lista *l) {
    no *tmp = l->fim;
    l->fim = tmp->anterior;

    if (l->fim != NULL)
        l->fim->proximo = NULL;
    else
        l->inicio = NULL;
    
    l->size--;

    free(tmp);
}

int main() {
    int queries, valor, controle_rev = 0;
    char comando[15];
    lista *queue = malloc(sizeof(lista));
    inicializaLista(queue);

    scanf("%d", &queries);
    for (int i = 0; i < queries; i++)
    {
        scanf("%s", comando);

        if (strcmp(comando, "reverse") == 0)
        {
            if (controle_rev == 0)
            {
                controle_rev = 1;
            } else {
                controle_rev = 0;
            }

        } else if (strcmp(comando, "push_back") == 0)
        {
            scanf("%d", &valor);
            if (controle_rev == 1) 
            {
                insereInicio(queue, valor);
            } else {
                insereFim(queue, valor);
            }
            
        } else if (strcmp(comando, "toFront") == 0)
        {
            scanf("%d", &valor);
            if (controle_rev == 1) 
            {
                insereFim(queue, valor);
            } else {
                insereInicio(queue, valor);
            }

        } else if (queue->size == 0) 
        {
            printf("No job for Ada?\n");
        } else if (strcmp(comando, "back") == 0)
        {
            if (controle_rev == 1)
            {
                valor = queue->inicio->valor;
                removeInicio(queue);
            } else {
                valor = queue->fim->valor;
                removeUltimo(queue);
            }
            printf("%d\n", valor);

        } else if (strcmp(comando, "front") == 0)
        {
            if (controle_rev == 1)
            {
                valor = queue->fim->valor;
                removeUltimo(queue);
            } else {
                valor = queue->inicio->valor;
                removeInicio(queue);
            }
            printf("%d\n", valor);
        }
    }
    return 0;
}