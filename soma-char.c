// Este exemplo ilusta como eh possivel somar
// dois vetores de char de uma vez;

#include <stdio.h>

int main()
{
	char v1[4] = {64, 32, 47, 25};
	char v2[4] = {-1, 5, 10, 8};
	char r[4];
	
	int *a, *b, *c;

	a = v1;
	b = v2;
	c = r;
	*c = *a + *b;

 return 0;
}