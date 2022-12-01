#include <stdio.h>

int balanceada(int *vetor, int inicio, int fim)
{
    if ( (inicio - 1) == (fim + 2) ) return 1;

    if ( (vetor[inicio] + vetor[fim]) != (vetor[inicio+1] + vetor[fim-1]) ) return 0;

 return balanceada(vetor, (inicio+1), (fim-1));
}

int main()
{
    int vetor[] = { 1, 2, 3, 4, 5, 6, 7, 8 };

    printf("%d\n", balanceada(vetor, 0, 7));
 return 0;
}
