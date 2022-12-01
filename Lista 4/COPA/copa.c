#include <stdio.h>

int copa(int participantes, int partidas)
{
    char paises[participantes][11];
    int i, pontos, total_de_pontos = 0;
    
    for ( i = 0; i < participantes; i++)
    {
        scanf("%s %d", paises[i], &pontos);

        total_de_pontos += pontos;
    }

 return ((3 * partidas) - total_de_pontos);
}

int main()
{
    int participantes, partidas;

    while ( scanf("%d %d", &participantes, &partidas) != EOF )
    {
        if ( participantes == 0 ) break;
        
        printf("%d\n", copa(participantes, partidas));
    }

 return 0;
}