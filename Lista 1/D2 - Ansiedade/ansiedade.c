#include <stdio.h>
#include <string.h>

int main()
{
    char input[4];
    int qtd_triagens = 0, sim = 0, i = 0;

    while ( scanf("%s", input) != EOF )
    {
        i++;

        if ( strcmp(input, "sim") == 0 )
            sim++;
            
        if ( sim == 2 ) {
            qtd_triagens++;
            sim++;
        }

        if ( i >= 10 )
        {
            i = 0;
            sim = 0;
        }
    }
    printf("%d\n", qtd_triagens);
    
 return 0;
}