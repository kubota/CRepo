#include <stdio.h>

/* conta caracteres da entrada; 2a versao */
main() {
	double nc;

	for( nc = 0; getchar() != EOF; ++nc ) {
		;
	}
	printf("%0.f\n", nc);
}