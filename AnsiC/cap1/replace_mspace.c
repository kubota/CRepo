#include <stdio.h>

main()
{
	
	int c = 0;
	int ns = 0;
	while((c = getchar()) != EOF) {
		if (c == ' ' && ns == 0) {
			ns = 1;
			putchar(c);
		}
		else if (c == ' ' && ns == 1) {
			ns = 1;
		}
		else {
			putchar(c);
			ns = 0;
		} 
	}
}