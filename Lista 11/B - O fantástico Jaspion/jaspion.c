/* #define KEY(A) (A)
#define LESS(A, B) (KEY(A) < KEY(B))
#define LESSEQ(A, B) (KEY(A) <= KEY(B))
#define EXCH(A, B) { Item t = A; A = B; B = t; }
#define CMPEXCH(A, B) { if (LESS(B, A)) EXCH(A, B); }

typedef struct Item
{
	char *palavra_jp = malloc( sizeof(char) * 80 );
	char *palavra_br = malloc( sizeof(char) * 80 );
} Item;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int instancias;
    scanf("%d", &instancias);

    int palavras, linhas;

    for (int i = 0; i < instancias; i++)
    {
        scanf("%d %d", &palavras, &linhas);
        Item *dicionario = malloc( sizeof(Item) * palavras );

        for (int j = 0; j < palavras; j++)
        {
            scanf("%[^\n]s", &dicionario->palavra_jp);
            scanf("%[^\n]s", &dicionario->palavra_br);
        }

        char *letra_mus = malloc( sizeof(char) * 80 );

        for (int j = 0; j < linhas; j++)
        {
            scanf("%[^\n]s", &letra_mus);

            for (int k = 0; k < palavras; k++)
            {
                if( strstr(letra_mus, dicionario->palavra_jp) )
                {

                }
                
            }
            
        }
        
        
    }

 return 0;
}
 */