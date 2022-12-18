#include <stdio.h>

void ultrapassa(unsigned int *vetor, unsigned int i, unsigned int soma, unsigned int limite)
{

    if ( i == 0 ) return; 

    soma += *vetor;

    if ( soma > limite )
    {
        ultrapassa(vetor + 1, i - 1, 0, limite);
        printf("%u\n", *vetor);
        return;
    }

    ultrapassa(vetor + 1, i - 1, soma, limite);
 return;
}

int main()
{
    unsigned int num, i = 0, soma = 0, limite = 0, vetor[1001];

    while ( scanf("%u", &num) != EOF )
    {
        if ( num == 0 ) break;

        vetor[i] = num;
        i++;
    }

    scanf("%d", &limite);
    ultrapassa(vetor, i, soma, limite);
 return 0;
}