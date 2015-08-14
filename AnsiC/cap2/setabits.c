#include <stdio.h>

int setabits(unsigned x, int p, int n, int y);

main() {
	unsigned x = 10;
	int p = 1;
	int n = 2;
	int y = 5; 
	printf("%d\n", setabits(x, p, n, y ));
	return 0;
}

int setabits(unsigned x, int p, int n, int y) {
	return ( x >> (p+1-n)& ~(~y<<n));
}