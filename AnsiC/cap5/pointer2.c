#include <stdio.h>

int strlen(char *s);

main() {

	char word[] = "Hello";
	
	int var = strlen( word );
	printf("%d\n", var );

	return 0;
}

int strlen(char *s) {
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;

	return n;
	
}

int strlen2(char *s) {
	
	char *p = s;

	while(*p != '\0') {
		p++;
	}
	return p - s;
}

/* strcpy: copia t para s; versao com vetor subscrito */
void strcpy(char *s, char *t) {
   int i;

   i = 0;
   while( s[i] = t[i] != '\0' )
       i++;

}

/* strcpy: copia t para s; versao apontador 1 */
void strcpy2(char *s, char *t) {
   
   while((*s = *t) != '\0') {
   	s++;
   	t++;
   }

}

/* strcpy: copia t para s; versao apontador 1 */
void strcpy3(char *s, char *t) {
   
   while((*s++ = *t++) != '\0')

}