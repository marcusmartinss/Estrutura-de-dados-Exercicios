#include <stdio.h>
#include <string.h>

int pares(char *string)
{
    if ( strlen(string) == 2 ) return 0;

    if ( string[0] == string[2] ) return 1 + pares(string + 1);

 return pares(string + 1);
}

int main()
{
    char string[201];
    int qtd_pares = 0;
    
    scanf("%s", string);
    printf("%d\n", pares(string));
 return 0;
}