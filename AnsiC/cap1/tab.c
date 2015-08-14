#include <stdio.h>

#ifndef MAX_BLANC
#define MAX_BLANC 1
#endif

int max = MAX_BLANC;

main() {
	
	extern int max;
	int c, count;
	count = 0;
	
	while ( (c = getchar()) != EOF ) {
		if ( c == ' ' && count < max ){
			putchar( ' ' );
			++count;
		}
		else if ( c == ' ' && count > max ){
			count = 0;
		}
		else if ( c != ' ' ){
			putchar( c );
			count = 0;
		}

	}

	return 0;
}