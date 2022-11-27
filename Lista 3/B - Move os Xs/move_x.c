#include <stdio.h>
#include <string.h>

void move_x(char *string, int i)
{
    if ( string[i] == '\0' ) return;
    if ( string[i] != 'x' && string[i] != '\0' ){
        printf("%c", string[i]);
        move_x(string, i+1);
    } else {
        move_x(string, i+1);
        printf("x");
    }

}

int main(void)
{
    char string[101];

    scanf("%s", string);

    move_x(string, 0);
    printf("\n");
    
 return 0;
}