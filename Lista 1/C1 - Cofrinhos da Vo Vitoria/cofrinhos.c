#include <stdio.h>

int main()
{
    int joaozinho, zezinho, total, repeat, i;
    int temp1, temp2, teste;

    teste = 1;

    do
    {
        joaozinho = 0;
        zezinho = 0;
        
        scanf("%d", &repeat);
        if ( repeat != 0 )
        {
            for (i = 0; i < repeat; i++)
            {
                if ( i == 0 )
                {
                    printf("Teste %d\n", teste);
                    teste++;
                }

                scanf("%d %d", &temp1, &temp2);
                    joaozinho   += temp1;
                    zezinho     += temp2;
                printf("%d\n", (joaozinho - zezinho));
            }
        }

        repeat != 0 ? printf("\n") : EOF;
    } while (repeat != 0);
 return 0;
}