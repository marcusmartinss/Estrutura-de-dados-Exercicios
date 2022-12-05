#include <stdio.h>
#include <string.h>

long int valor = 0;

void rumo_aos_9s(char *numero)
{
    for (int i = 0; i < strlen(numero); i++) valor += numero[i] - '0';

    if (valor % 9 != 0) { printf("%s is not a multiple of 9.\n", numero); }
    else { printf("%s is a multiple of 9 and has 9-degree %d.\n", numero, grau(valor, 1)); }
}

int grau(int valor, int grau_atual)
{
    if ( valor < 10)
        return grau_atual;
    else
        return grau(valor % 10 + (valor / 10) % 10+(valor / 100) % 10 + (valor / 1000) % 10, grau_atual + 1); 
}

int main(void)
{
    char numero[1001];

    while ( ( scanf("%s", numero) != EOF ) && ( strcmp(numero, "0\0") != 0 ) )
    {
        rumo_aos_9s(numero);
    }

 return 0;
}