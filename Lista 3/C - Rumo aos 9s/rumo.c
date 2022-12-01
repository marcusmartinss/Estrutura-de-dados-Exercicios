#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void rumo(char *numero, long int *resultado, int grau)
{
    int i, tamanho = strlen(numero);
    
    if ( *resultado % 9 == 0 )
    {
        int soma = 0;

        while ( *resultado != 0 )
        {
            soma += *resultado % 10;
            *resultado = *resultado / 10;
        }
        
        *resultado = 0;
    }
    else
    {
        printf("%s is not a multiple of 9.\n", numero);
    }
}

int main()
{
    char numero[1001];
    long resultado = 0;

    while ( scanf("%s", numero) != EOF )
    {
        if ( strcmp(numero, "0\0") == 0 ) break;
        
        rumo(numero, &resultado, 0);
    }
    
 return 0;
}