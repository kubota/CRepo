#include <stdio.h>

int pot(int m, int n);

/* testa funcao pot */
main() {
	
	int i;

	for (int i = 0; i < 10; ++i) {
		printf("%d %d %d\n", i, pot(2,i), pot(-3, i) );
	}	
	return 0;
}

/* pot: eleva base a enesima potencia. n > 0 */
int pot(int base, int n) {
    int i, p;

    p = 1;
    
    for (int i = 1; i <= n; ++i) {
    	p = p * base;
    }
    return p;
}