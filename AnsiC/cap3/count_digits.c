#include <stdio.h>

int main(){ /* conta digitos, espaco branco, outros */
	
	int c, i, nbranco, noutro, ndigito[10];

	nbranco = noutro = 0;

	for (i = 0; i < 10; i++)
		ndigito[i] = 0;
	while ((c = getchar() != EOF)) {
		switch(c) {
			case '0': case '1': case '2': case '3': case '4':
			case '5': case '6': case '7': case '8': case '9':
				ndigito[c-'0']++;
				break;
			case ' ':
			case '\n':
			case '\t':
			    nbranco++;
			    break;
			default:
			    noutro++;
				break;	
		}
	}

	printf("digitos = ");

	for (i = 0; i < 10; i++)	
		printf("%d\n", ndigito[i]);
	printf(", espaco em branco = %d, outros = %d\n", nbranco, noutro);
	return 0;
}