#include <stdio.h>
#include <string.h>

int main()
{
    int qtd_linhas, linha_padrao, linha_atual, coluna_padrao, coluna_atual, i;
    char opcao;
    
    scanf("%d", &qtd_linhas);
    fgetc(stdin);

    char strings[qtd_linhas][10001];
    for (i = 0; i < qtd_linhas; i++)
    {
        scanf("%[^\n]s", strings[i]);
        fgetc(stdin);
    }

    scanf("%d %d", &linha_padrao, &coluna_padrao);

    fgetc(stdin);
    linha_padrao--;
    linha_atual = linha_padrao;

    coluna_padrao--;
    coluna_atual = coluna_padrao;

    while ( scanf("%c", &opcao) != EOF )
    {
        fgetc(stdin);
        if ( opcao == 'j' )
        {
            if ( (linha_atual + 1) < qtd_linhas  )
            {
                linha_atual++;
            }
            
        } else if ( opcao == 'k' ) {
            if ( (linha_atual - 1) >= 0  )
            {
                linha_atual--;
            }
        }

        coluna_atual = coluna_padrao;
        while ( coluna_atual > strlen(strings[linha_atual]) - 1 )
        {
            coluna_atual--;
        } 

        printf("%d %d %c\n", linha_atual + 1, coluna_atual + 1, strings[linha_atual][coluna_atual]);
    }
    
 return 0;
}