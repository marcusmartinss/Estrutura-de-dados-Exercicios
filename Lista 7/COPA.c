#include <stdio.h>

int main()
{
    char oitavas[16] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P'};
    char quartas[8], semi[4], final[2];
    int i, valor1, valor2;

    for ( i = 0; i < 8; i++)
    {
        scanf("%d %d", &valor1, &valor2);
        fgetc(stdin);

        if ( valor1 > valor2 )
            quartas[i] = oitavas[i*2];
        else
            quartas[i] = oitavas[(i*2) + 1];
    }


    for ( i = 0; i < 4; i++)
    {
        scanf("%d %d", &valor1, &valor2);
        fgetc(stdin);

        if ( valor1 > valor2 )
            semi[i] = quartas[i*2];
        else
            semi[i] = quartas[(i*2) + 1];
    }

    for ( i = 0; i < 2; i++)
    {
        scanf("%d %d", &valor1, &valor2);
        fgetc(stdin);

        if ( valor1 > valor2 )
            final[i] = semi[i*2];
        else
            final[i] = semi[(i*2) + 1];
    }


    scanf("%d %d", &valor1, &valor2);
    fgetc(stdin);

    if ( valor1 > valor2 )
        printf("%c\n", final[0]);
    else
        printf("%c\n", final[1]);

 return 0;
}