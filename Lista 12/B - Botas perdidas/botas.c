#define KEY(A) (A)
#define LESS(A, B) (KEY(A) < KEY(B))
#define EQ(A, B) (KEY(A) == KEY(B))
#define LESS_EQ(A, B) (KEY(A) <= KEY(B))
#define EXCH(A, B) { Item t = A; A = B; B = t; }
#define CMP_EXCH(A, B) { if (LESS(B, A)) EXCH(A, B); }
#define EQ_STR(A, B) (strcmp(KEY(A), KEY(B)) == 0)
#define NULL_ITEM(Item) { NULL, 0, "\0" }

typedef struct Bota
{
    int medida;
    char lado;
} Bota;

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int loop, pares = 0;

    while ( scanf("%d", &loop) != EOF )
    {
        Bota *botas = malloc( sizeof(Bota) * loop );

        for (int i = 0; i < loop; i++)
        {
            scanf("%d", &botas[i].medida);
            scanf("%c", &botas[i].lado);
        }
        
        for (int i = 0; i < (loop-1); i++)
        {
            for (int j = 1; j < loop; j++)
            {
                if ( botas[i].medida == botas[j].medida && botas[i].lado == botas[j].lado )
                    pares++;
            }
            
        }
        
        printf("%d\n", pares);
    }

 return 0;
}