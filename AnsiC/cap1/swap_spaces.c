#include <stdio.h>

main() {
	
	int c = 0;

	while((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t')
			putchar( '\n' );
		else
			putchar( c );
	}

}