#include <stdio.h>

#ifndef MAX_SPACES
#define MAX_SPACES 10
#endif

int spaces = MAX_SPACES;

main() {
	
	extern int spaces;

	int c;

	while( (c = getchar()) != EOF ) {
		if (c == '\t')
			for (int i = 0; i < spaces; ++i) {
				putchar(' ');
			}
			putchar(c);
	}

	return 0;
}