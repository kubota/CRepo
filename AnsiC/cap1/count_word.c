#include <stdio.h>

#define DENTRO	1 	/* dentro de uma palavra*/
#define FORA	0	/* fora de uma palavra*/

main() {
	int c, nl, np, nc, estado;

	estado = FORA;
	nl = np = nc = 0;

	while( (c = getchar() ) != EOF ) {
		++nc;
		if ( c == '\n' )
			++nl;
		if ( c == ' ' || c == '\n' || c == '\t' )
			estado = FORA;
		else if (estado == FORA) {
			estado = DENTRO;
			++np;
		}
	}
	printf("%d %d %d\n",nl, np, nc );
}