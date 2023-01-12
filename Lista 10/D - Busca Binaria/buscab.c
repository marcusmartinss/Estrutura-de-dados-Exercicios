#define KEY(A) (A)
#define LESS(A, B) (KEY(A) < KEY(B))
#define LESSEQ(A, B) (KEY(A) <= KEY(B))
#define EXCH(A, B) { Item t = A; A = B; B = t; }
#define CMPEXCH(A, B) { if (LESS(B, A)) EXCH(A, B); }

typedef int Item;

#include <stdio.h>
#include <stdlib.h>

/* int busca(Item *vetor, Item a_buscar, int left, int right, int mid)
{
    if ( left > right )
        return left;
    
    if ( vetor[mid] == a_buscar )
        return mid;
    
    if ( vetor[mid] < a_buscar )
        return busca(vetor, a_buscar, mid + 1,  right, ((mid + 1)+right)/2);
    else
        return busca(vetor, a_buscar, left, mid - 1, (left+(mid-1))/2);
} */

int busca(Item *vetor, int tam, Item a_buscar)
{
    int left = 0, right = tam - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        
        if (KEY(vetor[mid]) == a_buscar)
            return mid;
        else
            if (KEY(vetor[mid]) < a_buscar)
                left = mid + 1;
            else
                right = mid - 1;
    }

 return left;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    Item *vetor = (Item *) malloc(n * sizeof(Item));
    
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        scanf("%d", vetor + i);
    }


    while (m--)
    {
        int a_buscar;
        scanf("%d", &a_buscar);

        printf("%d\n", busca(vetor, n, a_buscar));
    }

 return 0;
}