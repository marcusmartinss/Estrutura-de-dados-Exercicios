#include <stdio.h>

void string_ao_contrario(char *string)
{
    if( string[0] == '\0' ) return;
    
    string_ao_contrario(string+1);
    printf("%c", string[0]);
}

int main()
{
    char string[501];

    scanf("%s", string);
    string_ao_contrario(string);
    printf("\n");
 return 0;
}