#include <stdio.h>
#include <string.h>

int main()
{
    char pais[31];
    int teve_marte = 0;

    while (scanf("%s", pais) != EOF)
    {
        if ( strcmp(pais, "marte") == 0 )
        {
            printf("Leonardo Cicero Marciano\n");
            teve_marte = 1;
        }
    }
    teve_marte == 0 ? printf("none\n") : EOF;

 return 0;
}