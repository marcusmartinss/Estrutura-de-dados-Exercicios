#define key(A) (A)
#define less(A, B) (key(A) < key(B))
#define exch(A, B) { Item t = A; A = B; B = t; }
#define cmpexch(A, B) { if (less(B, A)) exch(A, B); }

#include <stdio.h>

typedef struct item
{
    int codigo_instrucao;
    char palavra_chave[15];
} Item;

int main()
{
    int qtd_instrucoes, temp;
    short int achou;

    scanf("%d", &qtd_instrucoes);

    Item instrucoes[qtd_instrucoes];

    for (int i = 0; i < qtd_instrucoes; i++)
        scanf("%d %s", &instrucoes[i].codigo_instrucao, &instrucoes[i].palavra_chave);
    

    while ( scanf("%d", &temp) != EOF )
    {
        achou = 0;
        for (int pos = 0; pos < qtd_instrucoes; pos++)
        {
            if ( instrucoes[pos].codigo_instrucao == temp )
            {
                printf("%s\n", instrucoes[pos].palavra_chave);
                achou = 1;
                break;
            }
        }
        if ( !achou )
            printf("undefined\n");
    }
    
 return 0;
}