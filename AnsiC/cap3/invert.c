#include <stdio.h>
#include <ctype.h>
#include "string.h"

int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}

/* inverte: inverte cadeia s no lugar */
void inverte(char s[]) {
    int c, i, j;
    for (int i = 0, j = strlen(s) - 1; i < j; i++, j--)   {
    	c = s[i];
    	s[i] = s[j];
    	s[j] = c;
    }
}
