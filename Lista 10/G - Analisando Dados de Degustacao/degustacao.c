#define KEY(A) (A)
#define LESS(A, B) (KEY(A) < KEY(B))
#define LESSEQ(A, B) (KEY(A) <= KEY(B))
#define EXCH(A, B) { Item t = A; A = B; B = t; }
#define CMPEXCH(A, B) { if (LESS(B, A)) EXCH(A, B); }

typedef struct Item
{
    int quantidade;
    int posicao;
    char letra;
} Item;

void merge(struct Item *vetor, int left, int r1, int r2)
{
    struct Item *v2 = malloc( sizeof(Item) * ( r2 - left + 1 ) );

    int i = left;
    int j = r1 + 1;
    int k = 0;

    while( i <= r1 && j <= r2 )
    {
        if ( vetor[i].quantidade < vetor[j].quantidade )
            v2[k++] = vetor[i++];
        else
            v2[k++] = vetor[j++];
    }

    while ( i <= r1 ) v2[k++] = vetor[i++];

    while( j <= r2 ) v2[k++] = vetor[j++];
    
    k = 0;

    for(i = left; i <= r2; i++)
        vetor[i] = v2[k++];
    
    free(v2);
}

void mergesort (struct Item *vetor, int left, int right)
{
    if ( left >= right ) return;

    int mid = ( left + right ) / 2;

    mergesort(vetor, left, mid);
    mergesort(vetor, mid + 1, right);
    merge(vetor, left, mid, right);
}

int main()
{
    char frase[100001];
    scanf("%s", frase);

    int j = 0;
    int z = 0;
    int tamanho = strlen(frase);

    Item caracter[tamanho];

    caracter[z].quantidade = 0;

    for(int i = 0; i < tamanho; i++)
    {
        if(frase[j] != frase[i])
        {
            j = i; z++;
            caracter[z].quantidade = 0;
        }

        caracter[z].quantidade++;
        caracter[z].posicao = j;
        caracter[z].letra = frase[j];
    }

    mergesort(caracter, 0, z);

    for(int i = z; i >= 0; i--)
        printf("%d %c %d\n", caracter[i].quantidade, caracter[i].letra, caracter[i].posicao);

 return 0;
}