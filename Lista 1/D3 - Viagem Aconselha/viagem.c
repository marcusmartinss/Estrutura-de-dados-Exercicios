#include <stdio.h>

int main()
{
    int restaurantes_existentes, codigo_maior, codigo_temp, nota_maior, nota_temp, dia = 1, i;

    while ( scanf("%d", &restaurantes_existentes) != EOF )
    {
        codigo_maior = -1;
        codigo_temp = -1;

        nota_maior = -1;
        nota_temp = -1;

        for ( i = 0; i < restaurantes_existentes; i++)
        {
            scanf("%d %d", &codigo_temp, &nota_temp);

            if ( (nota_temp > nota_maior) || ( (nota_temp == nota_maior) && (codigo_temp < codigo_maior) ) )
            {
                codigo_maior = codigo_temp;
                nota_maior = nota_temp;
            }
        }

        printf("Dia %d\n%d\n\n", dia, codigo_maior);
        dia++;
    }

 return 0;
}