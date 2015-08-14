#include <stdio.h>

main() {
	
	int i, j, c = 0;
	int ndigito[10];

	for( i = 0; i < 10; i++)
		ndigito[i] = 0;

	while( (c = getchar() ) != EOF ) {
		++ndigito[c-'0'];

	}

	for ( i = 0; i < 10; i++ ){
		printf("\n");
		for (j = 0; j < ndigito[i]; j++) {
			printf("%s", "*");
		}
	}

}