// Nao tentada ainda

#include <stdio.h>
#include <string.h>

int main()
{
    int qtd_linhas, linha_padrao, coluna_padrao, linha_atual, i;
    char opcao;
    
    scanf("%d", &qtd_linhas);

    char strings[qtd_linhas][10001];

    for (i = 0; i < qtd_linhas; i++)
    {
        scanf("%[^\n]s", strings[i]);
    }

    scanf("%d %d", &linha_padrao, &coluna_padrao);
    linha_atual = linha_padrao;
 
    while ( scanf("%c", &opcao) != EOF )
    {
        if ( opcao == 'j' )
        {
            if ( (linha_atual + 1) < qtd_linhas  )
            {
                linha_atual++;
                
            } else if ( (linha_atual + 1) == qtd_linhas )
            {
                continue;
            }
            
        } else if ( opcao == 'k' ) {
            
        }
        
        printf("%d %d %c\n", linha_atual, coluna_padrao, )
    }
    
    
 return 0;
}