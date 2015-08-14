#include <stdio.h>

#ifndef MAX_CHAR
#define MAX_CHAR 80
#endif

int max = MAX_CHAR;

main(){
	
	int c;
	int count = 0;
	extern int max;

	while( (c = getchar()) != EOF ) {
		if ( count < max ) {
			putchar(c);
			++count;
		}
		else if ( c != ' ' && count >= max) {
			putchar(c);
			++count;
		}
		else if ( c == ' ' && count >= max) {
			putchar('\n');
			count = 0;
		}
	}
	return 0;
}