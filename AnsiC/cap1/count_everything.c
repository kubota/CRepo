#include <stdio.h>

/* conta digitos, espacos, outros */

main() {

	int c, i, nbranco, noutro;
	int ndigito[10];

	nbranco = noutro = 0;
	for( i = 0; i < 10; ++i)
		ndigito[i] = 0;

	while( (c = getchar()) != EOF )
		if ( c >= '0' && c <= '9')
			++ndigito[c-'0'];
		else if ( c == ' ' || c == '\n' || c == '\t')
			++nbranco;
		else
			++noutro;

		printf("digitos = "); 
		for(i = 0; i < 10; i++)
			printf("%d", ndigito[i]);

		printf(", espaco branco = %d, outros = %d\n", nbranco, noutro);
}