#define KEY(A) (A)
#define LESS(A, B) (KEY(A) < KEY(B))
#define EQ(A, B) (KEY(A) == KEY(B))
#define LESS_EQ(A, B) (KEY(A) <= KEY(B))
#define EXCH(A, B) { Item t = A; A = B; B = t; }
#define CMP_EXCH(A, B) { if (LESS(B, A)) EXCH(A, B); }
#define EQ_STR(A, B) (strcmp(KEY(A), KEY(B)) == 0)
#define NULL_ITEM(Item) { NULL, 0, "\0" }

typedef int Item;

#include <stdio.h>
#include <stdlib.h>

int main()
{
    
 return 0;
}