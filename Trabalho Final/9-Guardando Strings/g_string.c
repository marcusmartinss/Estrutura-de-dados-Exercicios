#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STR_LEN (1 << 22)
typedef struct No {
    char *str;
    int count;
    struct No *proximo;
} No;

typedef struct Fila {
    struct No *inicio;
    struct No *fim;
} Fila;

void inicializaFila(Fila *fila) {
    fila->inicio = NULL;
    fila->fim = NULL;
}

void enfila(Fila *fila, char *valor, int tamanho) {
    No *novoNo = malloc(sizeof(struct No));
    novoNo->str = (char *)malloc(tamanho + 1);
    strcpy(novoNo->str, valor);
    novoNo->proximo = NULL;

    if (fila->fim != NULL) {
        fila->fim->proximo = novoNo;
    }
    fila->fim = novoNo;

    if (fila->inicio == NULL) {
        fila->inicio = novoNo;
    }
}

void desenfila(Fila *fila) {
    if (fila->inicio == NULL) {
        return;
    }

    No *noRemovido = fila->inicio;
    fila->inicio = fila->inicio->proximo;

    if (fila->inicio == NULL) {
        fila->fim = NULL;
    }

    free(noRemovido);
}

char *espia(Fila *fila) 
{
    return fila->inicio->str;
}

int countSubstring(char *string, char *substring)
    {
        int count = 0;
        char *p = string;
        size_t substringLength = strlen(substring);

        while ((p = strstr(p, substring)) != NULL) 
        {
            ++count;
            p += substringLength;
        }

        return count;
    }

int main() {
    char string[4194304 + 1];
    int tamanho;
    Fila *strings = malloc(sizeof(Fila));
    inicializaFila(strings);
    
    int i = 0;

    while (scanf("%s%n%*c", string, &tamanho) != EOF)
	{
		enfila(strings, string, tamanho);
        i++;
    }

    char *ultimo = strings->fim->str;
    char *atual;

    for (int j = i; j > 1; j--) {
        atual = espia(strings);
        strings->inicio->count = countSubstring(atual, ultimo);
        printf("%d\n", strings->inicio->count);
        desenfila(strings);
    }
    return 0;
}