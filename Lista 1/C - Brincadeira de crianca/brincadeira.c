#include <stdio.h>

int main()
{
    int qtd, num, alice, beto, i;

    do
    {
        scanf("%d", &qtd);

        if ( qtd != 0 )
        {
            for ( i = 0; i < qtd; i++ )
            {
                scanf("%d", &num);
                num == 0 ? alice++ : beto++;
            }

            printf("Alice ganhou %d e Beto ganhou %d\n", alice, beto);

            alice = 0;
            beto = 0;
        }
    } while ( qtd != 0 );
    
 return 0;
}