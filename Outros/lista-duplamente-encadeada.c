typedef struct no_st
{
    Item item;
    struct no_st *proximo;
    struct no_st *anterior;
} No_st;



void inserir_no_inicio(No_st **lista, int num)
{
    No_st *novo = malloc(sizeof(No_st));

    if( novo )
    {
        novo->valor = num;
        novo->proximo = *lista;
        novo->anterior = NULL;
    
        if(*lista) { (*lista)->anterior = novo; }

        *lista = novo;
    }
    else
        printf("Erro ao alocar memoria!\n");
}

void inserir_no_fim(No_st **lista, int num)
{
    No_st *aux, *novo = malloc(sizeof(No_st));

    if( novo )
    {
        novo->valor = num;
        novo->proximo = NULL;

        // eh o primeiro?
        if( *lista == NULL )
        {
            *lista = novo;
            novo->anterior = NULL;
        }
        else
        {
            aux = *lista;
            while(aux->proximo) { aux = aux->proximo; }

            aux->proximo = novo;
            novo->anterior = aux;
        }
    }
}

void inserir_no_meio(No_st **lista, int num, int ant)
{
    No_st *aux, *novo = malloc(sizeof(No_st));

    if( novo )
    {
        
        novo->valor = num;

        // eh o primeiro?
        if(*lista == NULL)
        {
            novo->proximo = NULL;
            novo->anterior = NULL;
            *lista = novo;
        }
        else
        {
            aux = *lista;
            while(aux->valor != ant && aux->proximo)
                aux = aux->proximo;

            novo->proximo = aux->proximo;

            if( aux->proximo )
                aux->proximo->anterior = novo;

            novo->anterior = aux;
            aux->proximo = novo;
        }
    }
    else
        printf("Erro ao alocar memoria!\n");
}

void inserir_ordenado(No_st **lista, int num)
{
    No_st *aux, *novo = malloc(sizeof(No_st));

    if ( novo )
    {
        novo->valor = num;
        // a lista está vazia?
        if(*lista == NULL)
        {
            novo->proximo = NULL;
            novo->anterior = NULL;
            *lista = novo;
        } // eh o menor?
        else
        {
            if(novo->valor < (*lista)->valor){
                novo->proximo = *lista;
                (*lista)->anterior = novo;
                *lista = novo;
            }
            else
            {
                aux = *lista;

                while(aux->proximo && novo->valor > aux->proximo->valor)
                    aux = aux->proximo;

                novo->proximo = aux->proximo;

                if(aux->proximo)
                    aux->proximo->anterior = novo;

                novo->anterior = aux;
                aux->proximo = novo;
            }
        }
    }
    else
        printf("Erro ao alocar memoria!\n");
}

No_st* remover(No_st **lista, int num)
{
    No_st *aux, *remover = NULL;

    if( *lista )
    {
        if( (*lista)->valor == num )
        {
            remover = *lista;
            *lista = remover->proximo;

            if( *lista ) { (*lista)->anterior = NULL; }
        }
        else
        {
            aux = *lista;
            while ( aux->proximo && aux->proximo->valor != num )
                aux = aux->proximo;
            
            if( aux->proximo )
            {
                remover = aux->proximo;

                aux->proximo = remover->proximo;

                if ( aux->proximo )
                    aux->proximo->anterior = aux;
            }
        }
    }

 return remover;
}

No_st* buscar(No_st **lista, int num)
{
    No_st *aux, *no = NULL;

    aux = *lista;
    
    while(aux && aux->valor != num)
        aux = aux->proximo;
    
    if(aux)
        no = aux;

 return no;
}

void imprimir(No_st *no){

    while(no)
    {
        printf("%d ", no->valor);
        no = no->proximo;
    }
    printf("\n");
}

No_st* ultimo(No_st **lista)
{
    No_st *aux = *lista;

    while(aux->proximo)
        aux = aux->proximo;
 return aux;
}

void imprimirContrario(No_st *no)
{    
    while( no )
    {
        printf("%d ", no->valor);
        no = no->anterior;
    }
    printf("\n");
}

int main(){

    No_st *removido, *lista = NULL;

    
 return 0;
}