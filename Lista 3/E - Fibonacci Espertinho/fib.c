int fibmem[81] = {[3 ... 80] = -1};

long int fibonacci (int n)
{
    fibmem[1] = 1;
    fibmem[2] = 1;

    if (fibmem[n] != -1) return fibmem[n];

    fibmem[n] = fibonacci(n-1) + fibonacci(n-2);
	
 return fibmem[n];
}
