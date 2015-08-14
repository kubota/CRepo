#include <stdio.h>

unsigned inverte(unsigned x, int p, int n);

int main() {
	unsigned x = 10;
	int p = 2;
	int n = 5;
	printf("%d\n", inverte(x, p, n));
	return 0;
}

unsigned inverte(unsigned x, int p, int n){
	return x & ~p+n;
}