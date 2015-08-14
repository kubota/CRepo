#include <stdio.h>

#ifndef ATIVO
#define ATIVO 1
#endif

unsigned obtembits(unsigned x, int p, int n);

main() {
	
	int n = 0;
	n = n & ~077;
	
	printf("%d\n", obtembits(100, 10, 10) );
	return 0;
}

unsigned obtembits(unsigned x, int p, int n){
	return (x>>(p+1-n)&~(~0<<n));
}