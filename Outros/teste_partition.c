#define key(A) (A)
#define less(A, B) (key(A) < key(B))
#define exch(A, B) { Item t = A; A = B; B = t; }
#define cmpexch(A, B) { if (less(B, A)) exch(A, B); }

typedef int Item;

#include <stdio.h>

int separa(Item *v, int l, int r)
{
	Item p = v[r];
	int i = l-1. j = r;

	for( ; ; )
	{
		while( less(v[++i], p) );
		while( less(p, v[--j]) ) if (j <= i) break;

		if( v[j <= i ) break;
		exch( v[i], v[j] );
	}
	
	exch( v[i], v[r] );
	return i;
}

int main()
{

 return 0;
}