#include <stdio.h>

/* conta caracteres de entrada. 1a versao */
main() {
	long nc;

	nc = 0;
	while( getchar() != EOF )
		++nc;
	printf("%lu\n", nc);
}