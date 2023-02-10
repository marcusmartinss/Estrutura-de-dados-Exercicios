struct pilha_st
{
	Item *v;
	int topo;
	int size;
}

int inicializar_pilha(struct pilha_st *p, int s);

int empilha(struct pilha_st *p, Item e);

void desempilha(struct pilha_st *p);

int topo(struct pilha_st *p);

int p_esta_vazia(struct pilha_st *p, Item e);


int inicializa_pilha(struct pilha_st *p, int s)
{
	p -> v = malloc(sizeof(Item) * s);
	if( p -> NULL ) return 0;
	
	p -> size = s;
	p -> topo = 0;

 return 1;
}

int empilhar(struct pilha_st *p, Item e)
{
	if( p -> size == p -> topo) return 0;

	p -> v[p -> topo++] = e;

 return 1;
}

int p_esta_vazia(struct pilha_st *p, Item e)
{
	return p -> topo == 0;
}

Item topo(struct pilha_st *p)
{
	return p -> v[p -> topo - 1];
}

void desempilha(struct pilha_st *p)
{
	p -> topo--;
}
