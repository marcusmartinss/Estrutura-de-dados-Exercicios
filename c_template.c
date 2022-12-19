#define key(A) (A)
#define less(A, B) (key(A) < key(B))
#define exch(A, B) { Item t = A; A = B; B = t; }
#define cmpexch(A, B) { if (less(B, A)) exch(A, B); }

typedef long int Item;

#include <stdio.h>

int main()
{
    
 return 0;
}