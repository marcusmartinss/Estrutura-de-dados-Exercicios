#include <stdio.h>

int main()
{
    int conta1, conta2, conta3, soma;

    scanf("%d %d %d", &conta1, &conta2, &conta3);
    scanf("%d", &soma);

    ( conta1 + conta2 + conta3 == soma ) ? (printf("Acertou\n")) : (printf("Errou\n"));
 return 0;
}