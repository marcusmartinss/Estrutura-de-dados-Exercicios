#include <stdio.h>
#include <string.h>

int main()
{
    int v[1000], i = 0;
    while ( scanf( "%x", &v[i] ) == 1 )
        i++;
    
    char *a = v;
    printf("%s\n", a);
    // Como o vetor v é um vetor de inteiros,
    // a string é impressa com a representação gráfica dos numeros.

 return 0;
}
