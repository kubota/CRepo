#include <stdio.h>

void minus(char c);

main() {
	
	int c = 0;

	while((c = getchar()) != EOF ) {
		minus(c);
	}

	return 0;
}

void minus(char c) {
	if ( c >= 'A' && c <= 'Z') {
		printf("%c", c + 32  );
	}
	else
		printf("%c", c );	

	/*for (int i = 0; i < 500; ++i)
	{
		printf("%c", i );	
	}*/
}