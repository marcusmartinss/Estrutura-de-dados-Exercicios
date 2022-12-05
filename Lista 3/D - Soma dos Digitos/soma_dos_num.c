#include <stdio.h>

int valor_total = 0;

long unsigned int soma_dos_digitos(long unsigned int num)
{
    valor_total += num % 10;

    if ( num < 10) return valor_total;
    
    return soma_dos_digitos(num/10);
}

int main(void)
{
    long unsigned int num;
    scanf("%lu", &num);

    printf("%lu\n", soma_dos_digitos(num));
}