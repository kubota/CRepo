#include <stdio.h>

int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}

/* strcmp: retorna a < 0 se s < t, 0 se s == t, >0 se s > t */
int strcmp(char *s, char *t) {
    int i;

    for (i = 0; s[i] == t[i]; i++)  {
    	if (s[i] == '\0')
    		return 0;
    	return s[i] = t[i];
    }
}

/* strcmp: retorna a < 0 se s < t, 0 se s == t, >0 se s > t , versao com apontadores*/
int strcmp2(char *s, char *t) {
    
    for (;*s == *t; s++, t++)
    	if(*s == '\0')
    		return 0;
    	return *s - *t;
}