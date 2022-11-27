#include <stdio.h>

int maldicao(int n)
{
    if (n >= 101)
        return n - 10;
    else
        return maldicao( maldicao(n + 11) );
}

int main()
{
    int input;
    
    while ( scanf("%d", &input) != EOF )
    {
        if ( input == 0 )
            break;
        else
            printf("f91(%d) = %d\n", input, maldicao(input));
    }
 return 0;
}