//Definicao da estrutura de uma fila
typedef fila_st
{
	 Item *v;
	 int size; // int ocupadas;
	 int ini, fim;
}fila_st;


// 
int incializa_fila(fila_st *fila, int size)
{
	f -> size = s;
	f -> v = malloc(s * sizeof(Item));
	
	if(f -> v == NULL) return 0;

	f -> ocupadas = 0;
	f -> ini = -1;
	f -> fim = 0;

 return 1;
}

// Operacao linear O(1)
int enfila(fila_st *f, Item e)
{
	if (f -> fim == f -> ini) return 0;

	f -> v[f -> fim++] = e;
	f -> fim = (f -> fim) % (f -> size);
	f -> ocupados++;

 return 1;
}

// Operacao linear O(1)
void desenfila(fila_st *f)
{
	f -> ocupados--;
	f -> ini = ( (f -> ini + 1) % (f -> size) );
}

// verifica se a próxima posição do vetor estoura a memória alocada
int esta_vazia(fila_st *f)
{
	return f -> ocupados == 0;
}

// qual item seria desenfileirado se eu desenfileirasse alguém
// Operacao linear O(1)
Item espia(fila_st *f)
{
	return f -> v[ (f -> ini + 1) % (f -> size) ];
}

int main()
{
	Item *f = malloc(sizeof(Item));
 	preenche(f);
	enfila();

	inicializa_fila(&f, 10);
	enfila(&f, 3);
	enfila(&f, 4);
	enfila( &f, espia(&f) );

	desenfila(&f);
}