#include <ctype.h>
#include <stdio.h>

int getch(void);
void ungetch(int);

/* leint: le proximo inteiro da entrada para *pn */
int leint(int *pn) {
	int c, sinal;

	while(isspace(c=getch())) /* salta espaco */
	    ;
	if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
    	ungetch(c);
    	return 0;
    }    
    sinal = (c == '-') ? -1 : 1;
    if (c == '+' || c == '-') 
    	c = getch();
    for (*pn = 0; isdigit(c); c = getch())
    	*pn = 10 * *pn + (c - '0');
    *pn *= sinal;
    if(c != EOF)
    	ungetch(c);
}
