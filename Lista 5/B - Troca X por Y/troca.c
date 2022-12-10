#include <stdio.h>

void trocax_y(char *string)
{
    if ( string[0] == '\0' ) return;

    if ( string[0] != 'x' )
        printf("%c", string[0]);
    else
        printf("y");
    
    trocax_y(string+1);
}

int main()
{
    char string[81];

    scanf("%s", string);
    trocax_y(string);
    printf("\n");
 return 0;
}