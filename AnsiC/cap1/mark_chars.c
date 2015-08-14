#include <stdio.h>

main() {
	
	int c = 0;

	while( (c=getchar()) != EOF)
		if (c == '\t'){
			putchar((int)'/');
			putchar((int)'t');
		}
		else if (c == '\b'){
			putchar((int)'/');
			putchar((int)'b');
		}
		else{
			putchar(c);
		}
}