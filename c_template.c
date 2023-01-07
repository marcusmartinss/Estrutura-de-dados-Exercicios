#define KEY(A) (A)
#define LESS(A, B) (KEY(A) < KEY(B))
#define LESSEQ(A, B) (KEY(A) <= KEY(B))
#define EXCH(A, B) { Item t = A; A = B; B = t; }
#define CMPEXCH(A, B) { if (LESS(B, A)) EXCH(A, B); }

typedef int Item;

#include <stdio.h>
#include <stdlib.h>

int main()
{
    
 return 0;
}