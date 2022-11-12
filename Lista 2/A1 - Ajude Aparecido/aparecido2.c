#include <stdio.h>

int main()
{
    int quantidade_de_pessoas;

    scanf("%d", &quantidade_de_pessoas);
    fgetc(stdin);

    int i, contas, conta_doutorando, resultado = 0;

    for ( i = 0; i < quantidade_de_pessoas; i++)
    {
        scanf("%d", &contas);
        fgetc(stdin);

        resultado += contas;
    }
    
    scanf("%d", &conta_doutorando);

    ( resultado == conta_doutorando ) ? (printf("Acertou\n")) : (printf("Errou\n"));

 return 0;
}